#include <stdio.h>

// Find the maximum product of any two distinct elements in an array.
// Negatives matter: the two most negative numbers can beat the two
// largest positives, e.g. {-10, -3, 5} -> 30 (-10 * -3), while
// {1, 2, 3, 4} -> 12 (3 * 4). Needs at least two elements.

int maxProductOfTwo(int arr[], int size)
{
    int largest1, largest2, smallest1, smallest2;
    int i, product1, product2;

    if (size < 2)
        return 0;

    largest1 = largest2 = -2147483647 - 1;
    smallest1 = smallest2 = 2147483647;

    for (i = 0; i < size; i++)
    {
        if (arr[i] > largest1)
        {
            largest2 = largest1;
            largest1 = arr[i];
        }
        else if (arr[i] > largest2)
        {
            largest2 = arr[i];
        }

        if (arr[i] < smallest1)
        {
            smallest2 = smallest1;
            smallest1 = arr[i];
        }
        else if (arr[i] < smallest2)
        {
            smallest2 = arr[i];
        }
    }

    product1 = largest1 * largest2;
    product2 = smallest1 * smallest2;
    return product1 > product2 ? product1 : product2;
}

int main()
{
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {-10, -3, 5, 6, 20};
    int arr3[] = {-10, -3, 5};

    printf("Max product of {1, 2, 3, 4}: %d\n", maxProductOfTwo(arr1, 4));
    printf("Max product of {-10, -3, 5, 6, 20}: %d\n", maxProductOfTwo(arr2, 5));
    printf("Max product of {-10, -3, 5}: %d\n", maxProductOfTwo(arr3, 3));

    return 0;
}
