#include<stdio.h>
int y = 10; // global variable
int sum(){
    int x = 60;
    printf("sum -> %d\n", x);
    printf("sum -> %d\n", y);
}

int main(){
  int x = 20;
  printf("main -> %d\n", x);
  printf("main -> %d\n", y);
  sum();  
  return 0;
}