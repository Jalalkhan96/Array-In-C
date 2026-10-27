#include <stdio.h>

// Find the second largest DISTINCT value in an array of any size
// entered by the user. Unlike a fixed "first and second largest" read,
// duplicates of the maximum do not count as the second largest:
// e.g. {5, 9, 9, 3} -> second largest is 5, not 9.

int main()
{
    int arr[100];
    int n, i;
    int largest, second;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    if (n < 2 || n > 100)
    {
        printf("Need between 2 and 100 elements.\n");
        return 1;
    }

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    largest = arr[0];
    second = arr[0];
    for (i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            second = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && (second == largest || arr[i] > second))
        {
            second = arr[i];
        }
    }

    if (second == largest)
        printf("No second largest value (all elements are equal).\n");
    else
        printf("Second largest: %d\n", second);
    return 0;
}
