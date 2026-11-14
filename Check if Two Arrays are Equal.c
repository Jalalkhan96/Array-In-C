#include <stdio.h>

// Check whether two arrays are equal: same size and the same element
// at every position (order matters), e.g. {1, 2, 3} and {1, 2, 3} are
// equal, {1, 2, 3} and {3, 2, 1} are not (same elements, different
// order), and arrays of different sizes are never equal.

int arraysEqual(int a[], int sizeA, int b[], int sizeB)
{
    int i;
    if (sizeA != sizeB)
        return 0;
    for (i = 0; i < sizeA; i++)
    {
        if (a[i] != b[i])
            return 0;
    }
    return 1;
}

int main()
{
    int arr1[] = {1, 2, 3};
    int arr2[] = {1, 2, 3};
    int arr3[] = {3, 2, 1};
    int arr4[] = {1, 2};

    printf("{1, 2, 3} vs {1, 2, 3}: %s\n",
           arraysEqual(arr1, 3, arr2, 3) ? "Equal" : "Not equal");
    printf("{1, 2, 3} vs {3, 2, 1}: %s\n",
           arraysEqual(arr1, 3, arr3, 3) ? "Equal" : "Not equal");
    printf("{1, 2, 3} vs {1, 2}: %s\n",
           arraysEqual(arr1, 3, arr4, 2) ? "Equal" : "Not equal");

    return 0;
}
