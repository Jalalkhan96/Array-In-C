#include <stdio.h>

// Check whether an array is sorted in ascending order. Equal neighbours
// still count as sorted, e.g. {1, 2, 2, 5} is sorted, {1, 3, 2, 4} is not.
// An empty array or a single-element array counts as sorted.

int isSorted(int arr[], int size)
{
    int i;
    for (i = 0; i < size - 1; i++)
    {
        if (arr[i] > arr[i + 1])
            return 0;
    }
    return 1;
}

int main()
{
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {1, 3, 2, 4};
    int arr3[] = {1, 2, 2, 5};

    printf("{1, 2, 3, 4, 5} -> %s\n",
           isSorted(arr1, 5) ? "Sorted" : "Not sorted");
    printf("{1, 3, 2, 4} -> %s\n",
           isSorted(arr2, 4) ? "Sorted" : "Not sorted");
    printf("{1, 2, 2, 5} -> %s\n",
           isSorted(arr3, 4) ? "Sorted" : "Not sorted");

    return 0;
}
