#include<stdio.h>
#include<string.h>
int main(){
  char a[10] = "orange", b[10] = "apple";

  for(int i = 0; i <= strlen(b); i++){
    a[i] = b[i];
  }

  printf("%s", a);
  return 0;
}