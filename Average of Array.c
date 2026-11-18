#include <stdio.h>

// Average of the elements in an array, e.g.
// {1, 2, 3, 4, 5} -> average 3.00.

double average(int arr[], int size)
{
    int i;
    double sum = 0;
    for (i = 0; i < size; i++)
        sum += arr[i];
    return sum / size;
}

int main()
{
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {10, 20, 30};
    int arr3[] = {7};

    printf("{1, 2, 3, 4, 5} average: %.2f\n", average(arr1, 5));
    printf("{10, 20, 30} average: %.2f\n", average(arr2, 3));
    printf("{7} average: %.2f\n", average(arr3, 1));

    return 0;
}
