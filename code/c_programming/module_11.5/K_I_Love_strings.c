#include<stdio.h>
int main(){
  int n;
  scanf("%d", &n);

  for(int i = 0; i < n; i++){
    char s[51] ={'\0'}, t[51] = {'\0'};
    scanf("%s %s", &s, &t);

    for(int i = 0; i < 51; i++){
        if(s[i] != '\0'){
            printf("%c", s[i]);
        }

        if(t[i] != '\0'){

            printf("%c", t[i]);
        }

        if(s[i] == '\0' && t[i] == '\0'){
            break;
        }
    }
    printf("\n");
  }
  return 0;
}