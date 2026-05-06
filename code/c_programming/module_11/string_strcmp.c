#include<stdio.h>
#include<string.h>
int main(){
  char a[101], b[101];
  scanf("%s %s", &a, &b);

  int val = strcmp(a, b);

if(val < 0){
    printf("A is smallar");
}else if (val == 0){
    printf("Equal");
}else{
    printf(" B is smallar");
}
  
  return 0;
}