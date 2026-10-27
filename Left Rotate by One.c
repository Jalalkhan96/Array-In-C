#include <stdio.h>

// Rotate an array left by one position: the first element moves to
// the end and every other element shifts one place left, e.g.
// {1, 2, 3, 4, 5} -> {2, 3, 4, 5, 1}

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
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int first, i;

    printf("Original Array: ");
    displayArray(arr, size);

    first = arr[0];
    for (i = 0; i < size - 1; i++)
        arr[i] = arr[i + 1];
    arr[size - 1] = first;

    printf("After left rotate by one: ");
    displayArray(arr, size);
    return 0;
}
