#include <stdio.h>

// Find the longest strictly increasing subarray (a run where each element
// is greater than the one before it) and print its length and elements.
// e.g. {1, 2, 3, 1, 2, 3, 4, 5, 1} has longest run {1, 2, 3, 4, 5} of
// length 5. A decreasing array has longest run length 1.

void longestIncreasingSubarray(int arr[], int size)
{
    if (size == 0)
    {
        printf("Array is empty.\n");
        return;
    }
    int bestStart = 0, bestLen = 1;
    int curStart = 0, curLen = 1;

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > arr[i - 1])
        {
            curLen++;
        }
        else
        {
            curStart = i;
            curLen = 1;
        }
        if (curLen > bestLen)
        {
            bestLen = curLen;
            bestStart = curStart;
        }
    }

    printf("Longest increasing subarray (length %d): {", bestLen);
    for (int i = bestStart; i < bestStart + bestLen; i++)
    {
        printf("%d", arr[i]);
        if (i < bestStart + bestLen - 1)
        {
            printf(", ");
        }
    }
    printf("}\n");
}

int main()
{
    int arr1[] = {1, 2, 3, 1, 2, 3, 4, 5, 1};
    int arr2[] = {5, 4, 3, 2, 1};
    int arr3[] = {1, 2, 2, 3, 4};

    longestIncreasingSubarray(arr1, 9);
    longestIncreasingSubarray(arr2, 5);
    longestIncreasingSubarray(arr3, 5);

    return 0;
}
