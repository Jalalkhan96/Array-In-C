#include <stdio.h>

// Count how many zeros are in an array, e.g. {0, 1, 0, 3, 0, 5} has
// 3 zeros, {1, 2, 3} has 0 zeros.

int countZeros(int arr[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int arr1[] = {0, 1, 0, 3, 0, 5};
    int arr2[] = {1, 2, 3};
    int arr3[] = {0, 0, 0};

    printf("Zeros in {0, 1, 0, 3, 0, 5}: %d\n", countZeros(arr1, 6));
    printf("Zeros in {1, 2, 3}: %d\n", countZeros(arr2, 3));
    printf("Zeros in {0, 0, 0}: %d\n", countZeros(arr3, 3));

    return 0;
}
