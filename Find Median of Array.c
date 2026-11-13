#include <stdio.h>

// Find the median of an array: the middle value after sorting, or the
// average of the two middle values when the size is even, e.g.
// {3, 1, 2} -> 2, {1, 2, 3, 4} -> 2.5. The input array is sorted in
// place with a simple bubble sort.

void sortArray(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

double findMedian(int arr[], int size)
{
    sortArray(arr, size);

    if (size % 2 == 1)
        return arr[size / 2];
    return (arr[size / 2 - 1] + arr[size / 2]) / 2.0;
}

int main()
{
    int arr1[] = {3, 1, 2};
    int arr2[] = {1, 2, 3, 4};
    int arr3[] = {7, 10, 4, 3, 20, 15};

    printf("Median of {3, 1, 2}: %.1f\n", findMedian(arr1, 3));
    printf("Median of {1, 2, 3, 4}: %.1f\n", findMedian(arr2, 4));
    printf("Median of {7, 10, 4, 3, 20, 15}: %.1f\n", findMedian(arr3, 6));

    return 0;
}
