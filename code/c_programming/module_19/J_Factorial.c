#include<stdio.h>

long long int fact(int n){
    if(n == 1){
        return 1;
    }
    long long int mult = fact(n-1);
    return n * mult;
}

int main(){
 int n;
  scanf("%d", &n);

 
  long long int factorial = fact(n);
  printf("%lld", factorial);
  return 0;
}