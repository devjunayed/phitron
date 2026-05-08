#include<stdio.h>

void fun(int a[]){
    // it will modify main array as it was passed by reference
    a[1] = 200; 
}

int main(){
  int a[5] = {10, 20, 30, 40, 50};
  int x = 10;
  fun(a);// passed by references
  for(int i = 0; i < 5; i++){

      printf("%d ", a[i]);
  }
  return 0;
}