#include<stdio.h>
int sumOfTwo(){
    int a, b;
    scanf("%d %d", &a, &b);
    return a + b;
}
int main(){
  int ans = sumOfTwo();
  printf("%d", ans);
  return 0;
}