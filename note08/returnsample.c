#include <stdio.h>

int hoge(void){
  puts("hoge1");
  return;
  puts("hoge2");
}

int main(void){
    hoge();
}