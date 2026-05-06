#include<stdio.h>
int main(){
  char str[1000001];
  int sum = 0;

  scanf("%s", &str);

  for(int i = 0; i < strlen(str); i++){
    sum+=str[i] - 48;
  }

  printf("%d", sum);
  return 0;
}