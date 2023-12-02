#include <debug.h>

void init_irq(void);
void init_fs(void);
void init_proc(void);
void init_mm(void);

int main() {
  // extern const char logo[];
  // printf("%s", logo);
  // printf("Log:Build time: %s, %s\n", __TIME__, __DATE__);
  
  volatile int a = 0;
  volatile int b = 100;
  putstr("Init\n");
  // putstr("...\n");
  // putch('I');
  // putch('n');
  // putch('i');
  // putch('t');
  // putch('.');
  // putch('.');
  // putch('.');
  // putch('\n');
  for(int i = 0; i < b; i++) a= a + 1;
  b = a;

  putstr("Hello ");
  putstr("CECS!\n");
  // putch('H');
  // putch('e');
  // putch('l');
  // putch('l');
  // putch('o');
  // putch(' ');
  // putch('C');
  // putch('E');
  // putch('C');
  // putch('S');
  // putch('!');
  // putch('\n');

  // putstr("init mm\n");
  // putch('i');
  // putch('n');
  // putch('i');
  // putch('t');
  // putch(' ');
  // putch('m');
  // putch('m');
  // putch('\n');
  // for(int i = 0; i < b; i++) a= a + 1;
  // b = a;

  // init_mm();

  // putstr("init irq\n");
  // putch('i');
  // putch('n');
  // putch('i');
  // putch('t');
  // putch(' ');
  // putch('i');
  // putch('r');
  // putch('q');
  // putch('\n');
  // for(int i = 0; i < b; i++) a= a + 1;
  // b = a;

  // init_irq();

  // putstr("init fs\n");
  // putch('i');
  // putch('n');
  // putch('i');
  // putch('t');
  // putch(' ');
  // putch('f');
  // putch('s');
  // putch('\n');
  // init_fs();

  // for(int i = 0; i < b; i++) a= a + 1;
  // b = a;

  // putstr("init proc\n");
  // putch('i');
  // putch('n');
  // putch('i');
  // putch('t');
  // putch(' ');
  // putch('p');
  // putch('r');
  // putch('o');
  // putch('c');
  // putch('\n');
  // for(int i = 0; i < 1000; i++) a= a + 1;

  
  // putch('H');
  // putch('e');
  // putch('l');
  // putch('l');
  // putch('o');
  // putch(' ');
  // putch('C');
  // putch('E');
  // putch('C');
  // putch('S');
  // putch('!');
  init_proc();
  // user_prog();
  printf("%d\n",a);

  // Log("Finish initialization");
  // putstr("Finish initialization\n");
  yield();

  // panic("Should not reach here");
}
