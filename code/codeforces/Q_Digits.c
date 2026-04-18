#include<stdio.h>
int main(){
  int a, b;
  scanf("%d", &a);

  for(int i = 1; i <= a; i++){
    scanf("%d", &b);

     if(b == 0){
      printf("%d", b);
    }

    while(b != 0){

        printf("%d ", b%10);
        b = b / 10;
    }

   
    printf("\n");

  }
  return 0;
}