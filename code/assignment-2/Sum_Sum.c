#include <stdio.h>
int main()
{
    int n, postive_sum = 0, negative_sum = 0;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if(arr[i] > 0){
            postive_sum+=arr[i];
        }else if(arr[i] < 0){
            negative_sum+=arr[i];

        }
    }

    printf("%d %d", postive_sum, negative_sum);


    return 0;
}