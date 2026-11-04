#include <stdio.h>

// Find all pairs of array elements (i < j) that add up to a given sum, e.g.
// {1, 5, 7, -1, 5} with target 6 -> (1, 5), (1, 5), (7, -1)

int main()
{
    int arr[] = {1, 5, 7, -1, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 6;
    int i, j, found = 0;

    printf("Pairs with sum %d:\n", target);
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                printf("(%d, %d)\n", arr[i], arr[j]);
                found = 1;
            }
        }
    }

    if (!found)
        printf("No pair found.\n");
    return 0;
}
