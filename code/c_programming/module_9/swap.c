#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int temp;
    temp = a;
    a = b;
    b = temp;

    printf("A = %d, B = %d", a, b);
    return 0;
}