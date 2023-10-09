#include <stdint.h>
#include <iostream>
#include <assert.h>
#include "include/debug.h"
#include <fstream>

extern uint8_t pmem[];
using namespace std;

// load a binary file into your cpu
uint64_t load_img(char *img_file){
// Lab2 TODO: load the 'img_file' to the start of pmem, and return its size
    std::ifstream fin(img_file,ios::binary);
    unsigned char a;
    uint64_t cnt = 0;
    while(!fin.eof()){
        a = fin.get();
        // fin>>a;
        // if(a==10)std::cout<<cnt<<std::endl;
        // if(cnt<100)printf("%x\n",a);
        pmem[cnt++] = a;
    }
    fin.close();
    printf("Load IMG complete!\n");
    return cnt;

    // FILE* t;
    // t = fopen(img_file,"r");
    // std::ifstream fin(img_file,ios::binary);
    // for(int i = 0;i < 10000;i ++){
    //     char* a1;
    //     fread(a1,sizeof(uint8_t),1,t);

    //     char a2;
    //     fin>>a2;

    //     if(*a1 != a2)std::cout<<"ERROR!!\n";
    // }

}