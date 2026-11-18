#include <stdio.h>

// Minimum value in an array (smallest element), e.g.
// {5, 9, 3, 7} -> minimum 3.
// Works for negative numbers too; a single-element array's
// minimum is that element.

int minimum(int arr[], int size)
{
    int i;
    int min = arr[0];
    for (i = 1; i < size; i++)
    {
        if (arr[i] < min)
            min = arr[i];
    }
    return min;
}

int main()
{
    int arr1[] = {5, 9, 3, 7};
    int arr2[] = {-4, -1, -9, -2};
    int arr3[] = {42};

    printf("Minimum of {5, 9, 3, 7}: %d\n", minimum(arr1, 4));
    printf("Minimum of {-4, -1, -9, -2}: %d\n", minimum(arr2, 4));
    printf("Minimum of {42}: %d\n", minimum(arr3, 1));

    return 0;
}
