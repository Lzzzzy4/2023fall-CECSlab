#include <dev-mmio.h>
#include <base.h>
#include <tool.h>

#define CONFIG_FFB_ADDR 0xa2000000

#define SYNC_ADDR (VGACTL_ADDR + 4)

void __gpu_init() {;

}

void __gpu_config(DEV_GPU_CONFIG_T *cfg) {
  uint32_t size = inl(VGACTL_ADDR);
  uint32_t w = (size >> 16) & 0x0ffff;
  uint32_t h = size & 0x0ffff;
  *cfg = (DEV_GPU_CONFIG_T) {
    .present = true, .has_accel = false,
    .width = w, .height = h,
    .vmemsz = 0
  };
}

// void __gpu_fbdraw(DEV_GPU_FBDRAW_T *ctl) {
//   bool sync = ctl->sync;
//   int x = ctl->x; 
//   int y = ctl->y;
//   int w = ctl->w;
//   int h = ctl->h;
//   uint32_t *pixels = ctl->pixels;
//   uint32_t size = inl(VGACTL_ADDR);
//   uint32_t W = (size >> 16) & 0x0ffff;
//   uint32_t H = size & 0x0ffff;
//   uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
  
//   for(int i = 0; i < h; i++){
//     for(int j = 0; j < w; j++){
//       if(y + i >= H || x + j >= W) continue;
//       fb[(y + i) * W + x + j] = pixels[i * w + j];
//     }
//   }
//   if(sync){
//     outl(SYNC_ADDR, 1);
//     return;
//   }
// }
typedef void(*io_callback_t)(uint32_t, int, bool);

void __gpu_fbdraw(DEV_GPU_FBDRAW_T *ctl) {
  // printf("gpu_fbdraw\n");
  bool sync = ctl->sync;
  uint32_t *pixels = ctl->pixels;
  uint32_t size = inl(VGACTL_ADDR);
  uint32_t W = (size >> 16) & 0x0ffff;
  uint32_t H = size & 0x0ffff;
  uint32_t *ffb_mem = (uint32_t *)CONFIG_FFB_ADDR;
  ffb_mem[0] = ctl->x;
  ffb_mem[1] = ctl->y;
  ffb_mem[2] = ctl->w;
  ffb_mem[3] = ctl->h;
  ffb_mem[4] = W;
  ffb_mem[5] = H;
  ffb_mem[6] = pixels;
  // uint32_t *fb = (uint32_t *)FB_ADDR;
  uint32_t *ffb_draw = (uint32_t *)(CONFIG_FFB_ADDR + 28);
  asm volatile("fence.i");
  *ffb_draw = 1;

  if(ctl->sync){
    outl(SYNC_ADDR, 1);
    return;
  }
}

void __gpu_status(DEV_GPU_STATUS_T *status) {
  status->ready = true;
}