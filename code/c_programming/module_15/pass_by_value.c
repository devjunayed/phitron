#include<stdio.h>

void fun(int x){
    x = 20;
    printf("%d\n", x);
}

int main(){
  int x = 10;
  fun(x);
  printf("%d\n", x);
  return 0;
}