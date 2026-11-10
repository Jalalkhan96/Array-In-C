#include <stdio.h>

// Count the frequency of each element in an array: every distinct value
// is printed once together with how many times it occurs,
// e.g. {1, 2, 2, 3, 1, 2} -> 1 occurs 2 times, 2 occurs 3 times,
// 3 occurs 1 time.

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

    int visited[n];
    for (int i = 0; i < n; i++)
    {
        visited[i] = 0;
    }

    printf("Frequency of each element:\n");
    for (int i = 0; i < n; i++)
    {
        if (visited[i])
        {
            continue;
        }

        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] == arr[i])
            {
                count++;
                visited[j] = 1;
            }
        }

        printf("%d occurs %d time%s\n", arr[i], count, count == 1 ? "" : "s");
    }

    return 0;
}
