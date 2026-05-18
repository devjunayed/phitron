#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    long long int arr[t];


    for (int i = 0; i < t; i++)
    {
        long long int m, d;
        int a, b, c;
        scanf("%lld %d %d %d", &m, &a, &b, &c);

        

        d = m / (a * b * c);
        // printf("d: %d\n", d);

        if (m == (a*b*c* d) )
        {
            arr[i] = d;
        }
        else
        {
            arr[i] = -1;
        }
    }

    for (int i = 0; i < t; i++)
    {
        printf("%lld\n", arr[i]);
    }
    return 0;
}