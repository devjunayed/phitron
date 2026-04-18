#include<stdio.h>
int main(){
  int n;
  long long int sum = 0;
  scanf("%d", &n);

  long long int arr[n];
  for(int i = 0; i < n; i++){
    scanf("%lld", &arr[i]);
  }

  for(int i = 0; i < n; i++){
    sum+=arr[i];
  }
  if(sum < 0){
    sum = sum - (sum * 2);
  }
  printf("%lld", sum);
  return 0;
}