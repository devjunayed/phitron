#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        char s[101];
        scanf("%s", &s);

        int size_of_s = strlen(s);

        if (size_of_s > 10)
        {
            char firstLetter = s[0], lastLetter = s[size_of_s - 1];

            printf("%c%d%c\n", firstLetter, size_of_s -  2, lastLetter);
        }
        else
        {
            printf("%s\n", s);
        }
    }

    return 0;
}