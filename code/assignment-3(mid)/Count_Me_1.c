#include <stdio.h>
int main()
{
    int n, divisible_two = 0, divisible_three = 0;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0 || (arr[i] % 2 == 0 && arr[i] % 3 == 0))
        {
            divisible_two++;
        }
        else if (arr[i] % 3 == 0)
        {
            divisible_three++;
        }
    }

    printf("%d %d", divisible_two, divisible_three);

    return 0;
}