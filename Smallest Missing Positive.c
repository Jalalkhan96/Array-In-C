#include <stdio.h>

// Find the smallest missing positive number: the smallest integer
// greater than 0 that does not appear in the array. Non-positive
// numbers and numbers larger than the array size can never be the
// answer, e.g. {3, 4, -1, 1} -> 2, {1, 2, 3} -> 4, {7, 8, 9} -> 1

int smallestMissingPositive(int arr[], int size)
{
    int present[size + 2];
    int i;
    int limit = size + 1;

    for (i = 0; i <= size + 1; i++)
        present[i] = 0;

    for (i = 0; i < size; i++)
    {
        if (arr[i] > 0 && arr[i] <= size)
            present[arr[i]] = 1;
    }
    for (i = 1; i <= limit; i++)
    {
        if (!present[i])
            return i;
    }
    return limit;
}

int main()
{
    int arr1[] = {3, 4, -1, 1};
    int arr2[] = {1, 2, 3};
    int arr3[] = {7, 8, 9};
    int arr4[] = {-5, -1};

    printf("{3, 4, -1, 1} -> smallest missing positive: %d\n",
           smallestMissingPositive(arr1, 4));
    printf("{1, 2, 3} -> smallest missing positive: %d\n",
           smallestMissingPositive(arr2, 3));
    printf("{7, 8, 9} -> smallest missing positive: %d\n",
           smallestMissingPositive(arr3, 3));
    printf("{-5, -1} -> smallest missing positive: %d\n",
           smallestMissingPositive(arr4, 2));

    return 0;
}
