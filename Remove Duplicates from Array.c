#include <stdio.h>

// Remove duplicate elements from an array, keeping the first occurrence
// of each value and preserving the original order, e.g.
// {1, 2, 2, 3, 1, 2} -> {1, 2, 3}. Returns the new size.

int removeDuplicates(int arr[], int size)
{
    int write = 0;

    for (int i = 0; i < size; i++)
    {
        int seen = 0;
        for (int j = 0; j < write; j++)
        {
            if (arr[j] == arr[i])
            {
                seen = 1;
                break;
            }
        }
        if (!seen)
            arr[write++] = arr[i];
    }
    return write;
}

void printArray(int arr[], int size)
{
    printf("{");
    for (int i = 0; i < size; i++)
        printf("%d%s", arr[i], i + 1 < size ? ", " : "");
    printf("}");
}

int main()
{
    int arr1[] = {1, 2, 2, 3, 1, 2};
    int arr2[] = {5, 5, 5, 5};
    int arr3[] = {1, 2, 3, 4};
    int n;

    n = removeDuplicates(arr1, 6);
    printf("Duplicates removed from {1, 2, 2, 3, 1, 2}: ");
    printArray(arr1, n);
    printf("\n");

    n = removeDuplicates(arr2, 4);
    printf("Duplicates removed from {5, 5, 5, 5}: ");
    printArray(arr2, n);
    printf("\n");

    n = removeDuplicates(arr3, 4);
    printf("Duplicates removed from {1, 2, 3, 4}: ");
    printArray(arr3, n);
    printf("\n");

    return 0;
}
