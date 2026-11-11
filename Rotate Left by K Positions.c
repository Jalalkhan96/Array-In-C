#include <stdio.h>

// Rotate an array to the left by k positions (reversal method), e.g.
// {1, 2, 3, 4, 5} rotated left by 2 -> {3, 4, 5, 1, 2}.
// k larger than the size wraps around (k = 7 behaves like k = 2).

void reverse(int arr[], int start, int end)
{
    int temp;
    while (start < end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void rotateLeftByK(int arr[], int size, int k)
{
    if (size <= 1)
        return;
    k = k % size;
    if (k < 0)
        k += size;
    if (k == 0)
        return;
    reverse(arr, 0, k - 1);
    reverse(arr, k, size - 1);
    reverse(arr, 0, size - 1);
}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {1, 2, 3, 4, 5};
    int arr3[] = {1, 2, 3, 4, 5};

    rotateLeftByK(arr1, 5, 2);
    printf("{1, 2, 3, 4, 5} left by 2: ");
    printArray(arr1, 5);

    rotateLeftByK(arr2, 5, 7);
    printf("{1, 2, 3, 4, 5} left by 7: ");
    printArray(arr2, 5);

    rotateLeftByK(arr3, 5, 0);
    printf("{1, 2, 3, 4, 5} left by 0: ");
    printArray(arr3, 5);

    return 0;
}
