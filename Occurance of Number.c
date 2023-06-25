#include <stdio.h>

void findMaxOccurrences(int arr[], int size) 
{
    printf("Maximum occurrences of each number in the array:\n");

    int frequency[100] = {0};

    for (int i = 0; i < size; i++) 
	{
        frequency[arr[i]]++;
    }

    for (int i = 0; i < size; i++) 
	{
        if (frequency[arr[i]] != 0) 
		{
            printf("%d = %d\n", arr[i], frequency[arr[i]]);
            frequency[arr[i]] = 0; 
        }
    }
}

int main() 
{
    int arr[5];

    printf("Enter 5 numbers in the array:\n");

    for (int i = 0; i < 5; i++) 
	{
        printf("Number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    findMaxOccurrences(arr, 5);

    return 0;
}
