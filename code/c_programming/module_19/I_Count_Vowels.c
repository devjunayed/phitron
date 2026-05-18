#include <stdio.h>
#include<string.h>

int countVowel(char s[],int index){
    if(s[index] ==  '\0'){
        return 0;
    }
    int cnt = countVowel(s, index+1);
    
    if(s[index] == 'a' || s[index] == 'e' || s[index] == 'i' || s[index] == 'o' || s[index] == 'u' || s[index] == 'A' || s[index] == 'E' || s[index] == 'I' || s[index] == 'O' || s[index] == 'U') {
        return cnt + 1;
    }else{
        return cnt;
    }

}

int main()
{
    char s[201];
    int index = 0;
    fgets(s, 201, stdin);

   int cnt = countVowel(s, index);
   printf("%d", cnt);
    return 0;
}