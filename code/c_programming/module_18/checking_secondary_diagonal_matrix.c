#include <stdio.h>
#include <stdbool.h>
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

    bool is_diagonal = true;

    if (row == column)
    {
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {

                if (i + j != row - 1 && arr[i][j] != 0)
                {
                    is_diagonal = false;
                    printf("Not a Primary Diagonal matrix");
                    break;
                }
            }
        }

        if (is_diagonal)
        {
            printf("secondary Diagonal matrix");
        }
    }
    else
    {
        printf("This is not a secodary diagonal matrix\n");
    }

    return 0;
}