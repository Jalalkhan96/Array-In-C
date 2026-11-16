#include <stdio.h>

// Find the most frequent element in an array: the value that occurs
// the most times, e.g. {1, 2, 2, 3, 1, 2} -> 2 (3 times).
// On a tie the element that appears first in the array wins, so
// {1, 2, 3} -> 1 (each appears once). Prints the value and its count.

int mostFrequent(int arr[], int size, int *count)
{
    int best = arr[0];
    int bestCount = 0;
    int i, j, currentCount;

    for (i = 0; i < size; i++)
    {
        currentCount = 0;
        for (j = 0; j < size; j++)
        {
            if (arr[j] == arr[i])
                currentCount++;
        }
        if (currentCount > bestCount)
        {
            bestCount = currentCount;
            best = arr[i];
        }
    }
    *count = bestCount;
    return best;
}

int main()
{
    int arr1[] = {1, 2, 2, 3, 1, 2};
    int arr2[] = {5, 5, 5, 5};
    int arr3[] = {1, 2, 3};
    int count, value;

    value = mostFrequent(arr1, 6, &count);
    printf("Most frequent in {1, 2, 2, 3, 1, 2}: %d (%d times)\n", value, count);

    value = mostFrequent(arr2, 4, &count);
    printf("Most frequent in {5, 5, 5, 5}: %d (%d times)\n", value, count);

    value = mostFrequent(arr3, 3, &count);
    printf("Most frequent in {1, 2, 3}: %d (%d times)\n", value, count);

    return 0;
}
