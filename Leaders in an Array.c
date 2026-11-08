#include <stdio.h>

// Leaders in an array: an element is a leader if it is greater than
// all elements to its right. The rightmost element is always a leader.
// e.g. {16, 17, 4, 3, 5, 2} -> leaders: 17, 5, 2

int main()
{
    int arr[] = {16, 17, 4, 3, 5, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int i, j, isLeader;

    printf("Array: ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nLeaders: ");

    for (i = 0; i < size; i++)
    {
        isLeader = 1;
        for (j = i + 1; j < size; j++)
        {
            if (arr[j] > arr[i])
            {
                isLeader = 0;
                break;
            }
        }
        if (isLeader)
        {
            printf("%d ", arr[i]);
        }
    }

    printf("\n");
    return 0;
}
