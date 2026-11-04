#include <stdio.h>

// Merge two sorted arrays into a single sorted array, e.g.
// {1, 3, 5, 7} + {2, 4, 6, 8} -> {1, 2, 3, 4, 5, 6, 7, 8}

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
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 4, 6, 8};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int merged[20];
    int i = 0, j = 0, k = 0;

    while (i < size1 && j < size2)
    {
        if (arr1[i] <= arr2[j])
            merged[k++] = arr1[i++];
        else
            merged[k++] = arr2[j++];
    }
    while (i < size1)
        merged[k++] = arr1[i++];
    while (j < size2)
        merged[k++] = arr2[j++];

    printf("Merged array: ");
    displayArray(merged, k);
    return 0;
}
