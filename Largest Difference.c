#include <stdio.h>

// Find the largest difference between any two elements of an array.
// It is the maximum element minus the minimum element, e.g.
// {1, 2, 3, 4, 5} -> 4, {7, 10, 4, 3, 20, 15} -> 17.

int largestDifference(int arr[], int size)
{
    int min = arr[0];
    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max - min;
}

int main()
{
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {7, 10, 4, 3, 20, 15};
    int arr3[] = {-5, 10};
    int arr4[] = {5, 5, 5};

    printf("Largest difference in {1, 2, 3, 4, 5}: %d\n", largestDifference(arr1, 5));
    printf("Largest difference in {7, 10, 4, 3, 20, 15}: %d\n", largestDifference(arr2, 6));
    printf("Largest difference in {-5, 10}: %d\n", largestDifference(arr3, 2));
    printf("Largest difference in {5, 5, 5}: %d\n", largestDifference(arr4, 3));

    return 0;
}
