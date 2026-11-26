#include <stdio.h>

// Count how many negative numbers are in an array, e.g. {1, -2, 3, -4, 0, -5}
// has 3 negative numbers, {1, 2, 3} has 0.

int countNegatives(int arr[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int arr1[] = {1, -2, 3, -4, 0, -5};
    int arr2[] = {1, 2, 3};
    int arr3[] = {-1, -2, -3};

    printf("Negatives in {1, -2, 3, -4, 0, -5}: %d\n", countNegatives(arr1, 6));
    printf("Negatives in {1, 2, 3}: %d\n", countNegatives(arr2, 3));
    printf("Negatives in {-1, -2, -3}: %d\n", countNegatives(arr3, 3));

    return 0;
}
