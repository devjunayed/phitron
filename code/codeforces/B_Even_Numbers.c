#include<stdio.h>
int main(){
  int a;
  scanf("%d", &a);

  int count_even = 0;

  for (int i = 1; i <= a; i++)
  {
    if(i % 2== 0){
        count_even++;
        printf("%d\n", i);
    }
  }

  if(count_even == 0){
    printf("-1\n");
  }
  
  return 0;
}