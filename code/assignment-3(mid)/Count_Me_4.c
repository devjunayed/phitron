#include <stdio.h>
#include<string.h>

int main()
{
    char s[10001];
    scanf("%s", &s);

    int arr[26] = {0};

    for (int i = 0; s[i] != '\0'; i++)
    {
        int dec_value_of_char = (s[i] - 0) - 97;
        arr[dec_value_of_char]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if(arr[i] > 0){

            printf("%c - %d\n", i + 97, arr[i]);
        }
    }

    return 0;
}