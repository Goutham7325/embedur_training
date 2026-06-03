#include <stdio.h>

// Rearrange array so that all even numbers come before odd numbers
// while preserving their original relative order.
void rearrangeEvenOdd(int *arr, int size)
{
    int temp[size];
    int *src = arr;
    int *dest = temp;

    // Copy even numbers first
    for (int i = 0; i < size; i++, src++)
    {
        if (*src % 2 == 0)
        {
            *dest = *src;
            dest++;
        }
    }

    // Reset source pointer
    src = arr;

    // Copy odd numbers next
    for (int i = 0; i < size; i++, src++)
    {
        if (*src % 2 != 0)
        {
            *dest = *src;
            dest++;
        }
    }

    // Copy back to original array
    src = temp;
    dest = arr;

    for (int i = 0; i < size; i++, src++, dest++)
    {
        *dest = *src;
    }
}

int main()
{
    int arr[] = {7, 2, 5, 8, 3, 4, 1, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    rearrangeEvenOdd(arr, size);

    printf("Rearranged array: ");
    int *p = arr;
    for (int i = 0; i < size; i++, p++)
    {
        printf("%d ", *p);
    }

    printf("\n");

    return 0;
}
