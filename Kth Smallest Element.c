#include <stdio.h>

// Find the kth smallest element in an array (k is 1-based).
// e.g. {7, 10, 4, 3, 20, 15}, k = 3 -> 7 (sorted: 3, 4, 7, 10, 15, 20)

int main()
{
    int arr[] = {7, 10, 4, 3, 20, 15};
    int size = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    int i, j, temp, kth;

    printf("Array: ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nk = %d\n", k);

    if (k < 1 || k > size)
    {
        printf("Invalid k: must be between 1 and %d\n", size);
        return 1;
    }

    // Simple selection sort (ascending).
    for (i = 0; i < size - 1; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    kth = arr[k - 1];
    const char *suffix = "th";
    if (k % 100 != 11 && k % 10 == 1) suffix = "st";
    else if (k % 100 != 12 && k % 10 == 2) suffix = "nd";
    else if (k % 100 != 13 && k % 10 == 3) suffix = "rd";
    printf("Sorted array: ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n%d%s smallest element: %d\n", k, suffix, kth);
    return 0;
}
