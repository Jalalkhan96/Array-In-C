#include <stdio.h>

// Count how many even and how many odd numbers an array contains, e.g.
// {1, 2, 3, 4, 5, 6} has 3 even and 3 odd numbers; {2, 4, 6} has
// 3 even and 0 odd.

void countEvenOdd(int arr[], int size, int *evenCount, int *oddCount)
{
    *evenCount = 0;
    *oddCount = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
            (*evenCount)++;
        else
            (*oddCount)++;
    }
}

int main()
{
    int arr1[] = {1, 2, 3, 4, 5, 6};
    int arr2[] = {2, 4, 6};
    int arr3[] = {1, 3, 5, 7, 9};
    int even, odd;

    countEvenOdd(arr1, 6, &even, &odd);
    printf("{1, 2, 3, 4, 5, 6}: %d even, %d odd\n", even, odd);

    countEvenOdd(arr2, 3, &even, &odd);
    printf("{2, 4, 6}: %d even, %d odd\n", even, odd);

    countEvenOdd(arr3, 5, &even, &odd);
    printf("{1, 3, 5, 7, 9}: %d even, %d odd\n", even, odd);

    return 0;
}
