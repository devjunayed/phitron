#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int space = n - 1, sign = 1;
    char flag = '#';

    for (int i = 0; i < n; i++)
    {

        for (int k = 0; k < space; k++)
        {
            printf(" ");
        }
        for (int j = 0; j < sign; j++)
        {
            printf("%c", flag);
        }
        if (flag == '#')
        {
            flag = '-';
        }
        else 
        {
            flag = '#';
        }
        sign += 2;
        space--;
        printf("\n");
    }

    space = 1, sign = sign - 4;
    for (int i = 0; i < n - 1; i++)
    {

        for (int k = space; k > 0; k--)
        {
            printf(" ");
        }
        for (int j = sign; j > 0; j--)
        {
            printf("%c", flag);
        }
        if (flag == '#')
        {
            flag = '-';
        }
        else 
        {
            flag ='#';
        }
        sign = sign - 2;
        space++;
        printf("\n");
    }

    return 0;
}