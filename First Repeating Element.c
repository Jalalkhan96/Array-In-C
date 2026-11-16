#include <stdio.h>

// Find the first repeating element: the value whose SECOND occurrence
// comes first while scanning left to right, e.g. {1, 5, 3, 4, 3, 5, 6}
// -> 3 (it repeats at index 4, before 5 repeats at index 5).
// Returns the value, or -1 when no element repeats.

int firstRepeating(int arr[], int size)
{
    int i, j;

    for (j = 1; j < size; j++)
    {
        for (i = 0; i < j; i++)
        {
            if (arr[i] == arr[j])
                return arr[j];
        }
    }
    return -1;
}

int main()
{
    int arr1[] = {1, 5, 3, 4, 3, 5, 6};
    int arr2[] = {1, 2, 3, 4};
    int arr3[] = {2, 2, 1};
    int result;

    result = firstRepeating(arr1, 7);
    printf("First repeating in {1, 5, 3, 4, 3, 5, 6}: %d\n", result);

    result = firstRepeating(arr2, 4);
    printf("First repeating in {1, 2, 3, 4}: %d\n", result);

    result = firstRepeating(arr3, 3);
    printf("First repeating in {2, 2, 1}: %d\n", result);

    return 0;
}
