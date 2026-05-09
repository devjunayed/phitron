#include<stdio.h>
#include<string.h>
int is_palindrome(char s[]){
    int is_pal = 1;
    for(int i = 0, j = strlen(s)-1; i < j; i++, j--){
       if(s[i] != s[j]){
        is_pal = 0;
       }
    }
    return is_pal;
}
int main(){
  char s[1001];
  scanf("%s", &s);

  if(is_palindrome(s)){
    printf("Palindrome\n");
  }else{
    printf("Not Palindrome\n");
  }
  return 0;
}