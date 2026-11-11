#include <stdio.h>

// Find a peak element: an element greater than its neighbours.
// The first and last elements count with their single neighbour, e.g.
// {1, 3, 20, 4, 1, 0} -> 20 at index 2. Returns the index, or -1
// when the array is empty.

int findPeak(int arr[], int size)
{
    int i;

    if (size <= 0)
        return -1;
    if (size == 1)
        return 0;
    if (arr[0] > arr[1])
        return 0;
    if (arr[size - 1] > arr[size - 2])
        return size - 1;

    for (i = 1; i < size - 1; i++)
    {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
            return i;
    }
    return -1;
}

int main()
{
    int arr1[] = {1, 3, 20, 4, 1, 0};
    int arr2[] = {1, 2, 3, 4, 5};
    int arr3[] = {5, 4, 3, 2, 1};
    int idx;

    idx = findPeak(arr1, 6);
    printf("Peak of {1, 3, 20, 4, 1, 0}: %d at index %d\n", arr1[idx], idx);

    idx = findPeak(arr2, 5);
    printf("Peak of {1, 2, 3, 4, 5}: %d at index %d\n", arr2[idx], idx);

    idx = findPeak(arr3, 5);
    printf("Peak of {5, 4, 3, 2, 1}: %d at index %d\n", arr3[idx], idx);

    return 0;
}
