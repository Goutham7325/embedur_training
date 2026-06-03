#include <stdio.h>

int searchMatrix(int rows, int cols, int matrix[rows][cols], int key)
{
    int i = 0;
    int j = cols - 1;

    while (i < rows && j >= 0)
    {
        if (matrix[i][j] == key)
        {
            printf("Key found at position (%d, %d)\n", i, j);
            return 1;
        }
        else if (key < matrix[i][j])
        {
            j--; // Move left
        }
        else
        {
            i++; // Move down
        }
    }

    return 0;
}

int main()
{
    int matrix[4][4] = {
        {10, 20, 30, 40},
        {15, 25, 35, 45},
        {27, 29, 37, 48},
        {32, 33, 39, 50}
    };

    int key;

    printf("Enter key to search: ");
    scanf("%d", &key);

    if (!searchMatrix(4, 4, matrix, key))
    {
        printf("Key not found\n");
    }

    return 0;
}
