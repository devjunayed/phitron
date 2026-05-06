#include<stdio.h>
int main(){
  int sz;
  scanf("%d", &sz);

  int arr[sz];
  for(int i = 0; i < sz; i++){
    scanf("%d", &arr[i]);
  }

  int flag = 1;

  for(int i = 0, j = sz-1; i < j; i++, j--){
    if(arr[i] != arr[j]){
        printf("NO");
        flag = 0;
        break;
    }
  }

  if(flag){
    printf("YES");
  }

  
  return 0;
}