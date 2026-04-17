#include<stdio.h>
#include<limits.h>

int main(){
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);

  int min = INT_MIN, max = INT_MAX;

  if(a >= b && a >=c ){
    max = a;
  }else if(b >= c){
    max = b;
  }else{
    max = c;
  }

  if (a <= b && a<= c){
    min = a;
  }else if(b <= c){
    min = b;
  }else{
    min = c;
  }

  printf("%d %d", min, max);


  return 0;
}