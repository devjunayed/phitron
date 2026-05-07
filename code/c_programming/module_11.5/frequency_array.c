#include<stdio.h>
int main(){
  int n;

  scanf("%d", &n);

  int a[n];

  int cnt [10] = {0};

  for(int i = 0; i < n; i++){
    scanf("%d", &a[i]);

    cnt[a[i]]++;

  }

  for(int i = 0; i <= 9; i++){
    if(cnt[i] != 0){
        printf("%d is %d times\n", i, cnt[i]);
    }
  }
  return 0;
}