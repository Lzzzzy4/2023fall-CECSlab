#include <debug.h>

void init_irq(void);
void init_fs(void);
void init_proc(void);
void init_mm(void);

int main() {
  while(1){
    printf("a");
  }
  extern const char logo[];
  printf("%s", logo);
  Log("Build time: %s, %s", __TIME__, __DATE__);
  Log("Start initialization...");

  printf("init_mm\n");
  init_mm();
  printf("init_irq\n");
  init_irq();
  printf("init_fs\n");
  init_fs();
  printf("init_proc\n");
  init_proc();
  printf("hello world\n");

  Log("Finish initialization");
  yield();

  panic("Should not reach here");
}
