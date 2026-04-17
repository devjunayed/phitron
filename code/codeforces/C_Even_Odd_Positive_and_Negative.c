#include<stdio.h>
int main(){
  int a, b;
  scanf("%d", &a);

  int even = 0, odd = 0, positive = 0, negative = 0;

  for (int i = 0; i < a; i++)
  {
    scanf("%d", &b);

    if(b % 2 == 0){
        even++;
    }else{
        odd++;
    }

    if(b > 0){
        positive++;
    }else if(b < 0){
        negative++;
    }
  }
  
  printf("Even: %d\n", even);
  printf("Odd: %d\n", odd);
  printf("Positive: %d\n", positive);
  printf("Negative: %d\n", negative);
  return 0;
}