#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        char str[10001];
        int capital = 0, small = 0, digit = 0;

        scanf("%s", &str);

        for (int j = 0; j < strlen(str); j++)
        {
            if (str[j] >= 65 && str[j] <= 90)
            {
                capital++;
            }
            else if (str[j] >= 97 && str[j] <= 122)
            {
                small++;
            }
            else if (str[j] >= 48 && str[j] <= 57)
            {
                digit++;
            }
        }

        printf("%d %d %d\n", capital, small, digit);
    }
    return 0;
}