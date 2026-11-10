#include <stdio.h>
#include <limits.h>

// Find the second smallest DISTINCT element in an array,
// e.g. {5, 9, 9, 3} -> second smallest is 5, and {7, 7, 7} has no
// second smallest. Mirrors the repo's "Second Largest Distinct.c"
// but for the smallest side.

int main()
{
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int smallest = INT_MAX;
    int secondSmallest = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < smallest)
        {
            secondSmallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] > smallest && arr[i] < secondSmallest)
        {
            secondSmallest = arr[i];
        }
    }

    if (secondSmallest == INT_MAX)
    {
        printf("There is no second smallest element.\n");
    }
    else
    {
        printf("Smallest element: %d\n", smallest);
        printf("Second smallest element: %d\n", secondSmallest);
    }

    return 0;
}
