#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    //   using for loop

    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        int tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
    }

    //   using while loop

    //   int i = 0;
    //   int j = n-1;

    //   while(i < j){
    //     int tmp = arr[i];
    //     arr[i] = arr[j];
    //     arr[j] = tmp;

    //     i++;
    //     j--;
    //   }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}