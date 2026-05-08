#include<stdio.h>

void sum(int num1, int num2){
    printf("%d", num1 + num2);
}

int main(){
  int a, b;
  scanf("%d %d", &a, &b);

  sum(a, b);
  return 0;
}