#include<stdio.h>
#include<string.h>
int main(){
    char s[101];
    gets(s);

    int size = strlen(s);
    printf("%d\n", size);
}