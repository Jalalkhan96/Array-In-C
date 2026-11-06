#include <stdio.h>

// Rotate an array right by one position: the last element moves to
// the front and every other element shifts one place right, e.g.
// {1, 2, 3, 4, 5} -> {5, 1, 2, 3, 4}

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
    int last, i;

    printf("Original Array: ");
    displayArray(arr, size);

    last = arr[size - 1];
    for (i = size - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = last;

    printf("After Right Rotation: ");
    displayArray(arr, size);

    return 0;
}
