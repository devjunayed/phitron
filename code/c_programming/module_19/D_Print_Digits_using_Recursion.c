#include <stdio.h>

void getInput(int n, int index, int arr[])
{
    if (index == n)
    {
        return;
    }
    scanf("%d", &arr[index]);
    index++;
    getInput(n, index, arr);
}

void printSingleInput(int val)
{
    if (val == 0)
    {
        return;
    }
    int rem_val, print_val;

    rem_val = val / 10;
    print_val = val % 10;
    printSingleInput(rem_val);
    printf("%d ", print_val);
}

void printInputs(int n, int index, int arr[])
{
    if (index == n)
    {
        return;
    }

    if (arr[index] == 0)
    {
        printf("%d", arr[index]);
    }
    else
    {

        printSingleInput(arr[index]);
    }
    printf("\n");
    printInputs(n, index + 1, arr);
}

int main()
{
    int n, index = 0;
    scanf("%d", &n);

    int arr[n];

    getInput(n, index, arr);

    printInputs(n, index, arr);

    return 0;
}