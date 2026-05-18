#include <stdio.h>
#include<stdbool.h>
int main()
{
    int row, column;
    scanf("%d %d", &row, &column);
    int arr[row][column];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    bool is_diagonal = 1;

    if (row == column)
    {
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {

                if (i != j && arr[i][j] != 0)
                {
                    is_diagonal = 0;
                }
            }
        }

        if (is_diagonal)
        {
            printf("Primary Diagonal matrix");
        }
        else
        {
            printf("Not a Primary Diagonal matrix");
        }
    }
    else
    {
        printf("This is not a primary diagonal matrix\n");
    }

    return 0;
}