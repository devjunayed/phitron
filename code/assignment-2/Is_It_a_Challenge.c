#include<stdio.h>
int main(){
  int a;
  scanf("%d", &a);

  if(a > 0){
    for(int i = 1; i <= a; i++){
        printf("%d ", i);
    }
  }else if(a < 0){
    for(int i = a; i<=0; i++){
        printf("%d ", i);
    }
  }else{
    printf("%d ", a);
  }
  
  return 0;
}