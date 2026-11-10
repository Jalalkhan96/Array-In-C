#include <stdio.h>

// Union of two arrays: every distinct element that appears in either
// array, printed once, e.g. {1, 2, 3, 4} and {3, 4, 5, 6} ->
// {1, 2, 3, 4, 5, 6}. (The repo's "Common Number.c" is the
// intersection; this is the union, which is a different set.)

int alreadyIn(int arr[], int size, int value)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == value)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int n1, n2;

    printf("Enter number of elements in first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter %d elements:\n", n1);
    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter number of elements in second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter %d elements:\n", n2);
    for (int i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    int unionArr[n1 + n2];
    int size = 0;

    for (int i = 0; i < n1; i++)
    {
        if (!alreadyIn(unionArr, size, arr1[i]))
        {
            unionArr[size++] = arr1[i];
        }
    }
    for (int i = 0; i < n2; i++)
    {
        if (!alreadyIn(unionArr, size, arr2[i]))
        {
            unionArr[size++] = arr2[i];
        }
    }

    printf("Union of the two arrays: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", unionArr[i]);
    }
    printf("\n");

    return 0;
}
