#include<stdio.h>
int sum(int num1, int sum2);

int sub(int num1, int num2){
    return num1-num2;
}

int sum(int num1, int num2){
    return num1+num2;
}

int main(){
  int a = 10, b = 20;

  int ans = sum(a, b);
  printf("%d", ans);
  return 0;
}