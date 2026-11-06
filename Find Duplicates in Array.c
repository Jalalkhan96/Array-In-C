#include <stdio.h>

// Find the duplicate values in an array. Each value that appears
// more than once is printed exactly once, e.g.
// {1, 2, 3, 2, 4, 5, 3, 1} -> duplicates: 1, 2, 3

int main()
{
    int arr[] = {1, 2, 3, 2, 4, 5, 3, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int i, j, k, alreadyPrinted, found = 0;

    printf("Array: ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nDuplicate values: ");

    for (i = 0; i < size; i++)
    {
        // Has this value already been reported as a duplicate?
        alreadyPrinted = 0;
        for (k = 0; k < i; k++)
        {
            if (arr[k] == arr[i])
            {
                alreadyPrinted = 1;
                break;
            }
        }
        if (alreadyPrinted)
            continue;

        // Does it appear again later in the array?
        for (j = i + 1; j < size; j++)
        {
            if (arr[j] == arr[i])
            {
                printf("%d ", arr[i]);
                found = 1;
                break;
            }
        }
    }

    if (!found)
        printf("none");

    printf("\n");
    return 0;
}
