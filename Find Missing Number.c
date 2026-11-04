#include <stdio.h>

// Find the missing number in an array holding n-1 distinct numbers
// from 1 to n, using the sum formula n*(n+1)/2, e.g.
// {1, 2, 4, 5, 6} (n = 6) -> missing number is 3

int main()
{
    int arr[] = {1, 2, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int n = size + 1;
    int expectedSum = n * (n + 1) / 2;
    int actualSum = 0;
    int i;

    for (i = 0; i < size; i++)
        actualSum += arr[i];

    printf("Missing number: %d\n", expectedSum - actualSum);
    return 0;
}
