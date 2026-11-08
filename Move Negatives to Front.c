#include <stdio.h>

// Move all negative numbers to the front of the array, keeping the
// relative order of both the negative and the non-negative elements.
// e.g. {-1, 2, -3, 4, 5, -6, -7, 8} -> {-1, -3, -6, -7, 2, 4, 5, 8}

int main()
{
    int arr[] = {-1, 2, -3, 4, 5, -6, -7, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int i, pos = 0, temp;

    printf("Original array: ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Stable partition: shift each negative left, preserving order.
    for (i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            temp = arr[i];
            for (int j = i; j > pos; j--)
            {
                arr[j] = arr[j - 1];
            }
            arr[pos] = temp;
            pos++;
        }
    }

    printf("After moving negatives to front: ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
