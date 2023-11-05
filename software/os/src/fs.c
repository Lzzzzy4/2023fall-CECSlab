#include <fs.h>
#include <debug.h>
#include <device.h>

// typedef size_t (*ReadFn) (void *buf, size_t offset, size_t len);
// typedef size_t (*WriteFn) (const void *buf, size_t offset, size_t len);

// typedef struct {
//   char *  name;
//   size_t  size;
//   size_t  disk_offset;
//   bool    is_open;
//   ReadFn  read;
//   WriteFn write;
//   size_t  open_offset;
// } Finfo;

enum {FD_STDIN, FD_STDOUT, FD_STDERR, FD_EVENTS, FD_FB, FD_DISPINFO};

/* This is the information about all files in disk. */
static Finfo file_table[] __attribute__((used)) = {
  [FD_STDIN]    = {"stdin",           0, 0, 0, invalid_read,  invalid_write},
  [FD_STDOUT]   = {"stdout",          0, 0, 0, invalid_read,  serial_write},
  [FD_STDERR]   = {"stderr",          0, 0, 0, invalid_read,  serial_write},
  [FD_EVENTS]   = {"/dev/events",     0, 0, 0, keyboard_read,  invalid_write},
  [FD_FB]       = {"/dev/fb",         0, 0, 0, invalid_read,  fb_write},
  [FD_DISPINFO] = {"/proc/dispinfo",  0, 0, 0, dispinfo_read,  invalid_write},
  #include "files.h"
};

Finfo find_file(const char *name) {
  for (int i = 0; i < sizeof(file_table) / sizeof(file_table[0]); i++) {
    if (strcmp(file_table[i].name, name) == 0) {
      return file_table[i];
    }
  }
  printf("File %s not found!\n", name);
  return file_table[0];
}
/* Init the file system. */
void init_fs() {
  Log("Initializing file system...");
  DEV_GPU_CONFIG_T gpu_config = io_read(DEV_GPU_CONFIG);
  file_table[FD_FB].size = gpu_config.height * gpu_config.width * 4;
}

/* Open a file and return the size of file. */
int fs_open(const char *pathname, int flags, int mode) {
  // Lab7 TODO: traverse the file_table and find the file
  int pos = -1;
  for (int i = 0; i < sizeof(file_table) / sizeof(file_table[0]); i++) {
    if (strcmp(file_table[i].name, pathname) == 0) {
      pos = i;
    }
  }
  if(pos == -1)return -1;
  else {
    file_table[pos].is_open = 1;
    file_table[pos].open_offset = 0;
    // printf("fs_open:%d %s\n",pos,pathname);
    return pos;
  }
}

/* Read `len` bytes of data from the file with `fd` into `buf` */
size_t fs_read(int fd, void *buf, size_t len) {
  // Lab7 TODO: read the file with fd from offset into buf
  if(fd == FD_EVENTS || fd == FD_DISPINFO){
    int read_len = file_table[fd].read(buf, 0, len);   
    return read_len;
  }
  if(!file_table[fd].is_open)return -1;
  if(file_table[fd].open_offset + len > file_table[fd].size)len = file_table[fd].size - file_table[fd].open_offset;
  ramdisk_read(buf, file_table[fd].disk_offset + file_table[fd].open_offset, len);
  file_table[fd].open_offset += len;
  return len;
}


/* Write `len` bytes of data from `buf` into the file with `fd` */
size_t fs_write(int fd, const void *buf, size_t len) {
  // printf("fs_write:%d\n",fd);
  // Lab7 TODO: write the file with fd from offset by buf
  if(fd == FD_STDOUT || fd == FD_STDERR || fd == FD_FB){
    int write_len = file_table[fd].write(buf, file_table[fd].open_offset, len);   
    // file_table[fd].open_offset += write_len;
    return write_len;
  }
  if(!file_table[fd].is_open)return -1;
  if(file_table[fd].open_offset + len > file_table[fd].size)len = file_table[fd].size - file_table[fd].open_offset;
  ramdisk_write(buf, file_table[fd].disk_offset + file_table[fd].open_offset, len);
  file_table[fd].open_offset += len;
  return len;
}

/* Seek the file with `fd` from the `offset` based on `whence` */
size_t fs_lseek(int fd, size_t offset, int whence) {
  // Lab7 TODO: seek the file with fd from the offset based on whence
  if(!file_table[fd].is_open)return -1;
  if(whence == SEEK_SET){
    if(offset < 0 || offset > file_table[fd].size)return -1;
    else file_table[fd].open_offset = offset;
  }
  else if(whence == SEEK_CUR){
    if(file_table[fd].open_offset + offset < 0 || file_table[fd].open_offset + offset > file_table[fd].size)return -1;
    else file_table[fd].open_offset += offset;
  }
  else if(whence == SEEK_END){
    if(file_table[fd].size + offset < 0 || file_table[fd].size + offset > file_table[fd].size)return -1;
    else file_table[fd].open_offset = file_table[fd].size + offset;
  }
  else return -1;
  return file_table[fd].open_offset;
}

/* Close the file with `fd` */
int fs_close(int fd){
  // Lab7 TODO: close the file with fd
  if(!file_table[fd].is_open)return -1;
  file_table[fd].is_open = 0;
  file_table[fd].open_offset = 0;
  return 0;
}
