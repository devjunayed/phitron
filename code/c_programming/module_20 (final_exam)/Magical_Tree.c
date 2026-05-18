#include<stdio.h>
int main(){
  int n;
  scanf("%d", &n);


  int space = (n+9)/2;


  for(int star = 1; star <= n+10;  star+=2){

    for(int i = 0; i < space; i++){
        printf(" ");
    }
    for(int i = 0; i < star; i++){
        printf("*");
    }
    space--;
    printf("\n");
  }

  space = (n+9)/2;
  for(int i = 0; i < 5; i++){
    for(int i = 0; i < 5; i++){
        printf(" ");
    }
   
    for(int j = 0; j < n; j++){
        printf("*");
    }
    printf("\n");
  }

  
  return 0;
}