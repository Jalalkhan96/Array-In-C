#include <stdio.h>

// Move all zeros in an array to the end, keeping the order of the
// non-zero elements unchanged. Done in place, e.g.
// {0, 1, 0, 3, 12} -> {1, 3, 12, 0, 0}

void displayArray(int arr[], int size)
{
    int i;
    printf("[");
    for (i = 0; i < size; i++)
    {
        printf("%d", arr[i]);
        if (i != size - 1)
            printf(", ");
    }
    printf("]\n");
}

int main()
{
    int arr[] = {0, 1, 0, 3, 12, 0, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int write = 0, i;

    printf("Original Array: ");
    displayArray(arr, size);

    for (i = 0; i < size; i++)
    {
        if (arr[i] != 0)
        {
            arr[write] = arr[i];
            write++;
        }
    }
    while (write < size)
    {
        arr[write] = 0;
        write++;
    }

    printf("After moving zeros to end: ");
    displayArray(arr, size);
    return 0;
}
