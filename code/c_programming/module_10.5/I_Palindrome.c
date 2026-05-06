#include<stdio.h>
#include<string.h>
int main(){
  char s[1001];
  scanf("%s", &s);

  int flag = 1;
  for(int i = 0, j = strlen(s) -1; i < j; i++, j--){
    if(s[i] != s[j]){
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