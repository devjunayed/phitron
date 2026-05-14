#include<stdio.h>
void hello(int n, int i){
    if(i== n){
        return;
    }
    
    printf("%d\n", i);
    hello(n, i+1);
  
}
int main(){
  int i = 1;
  hello(10, i);
  return 0;
}