#include <stdio.h>

void insertSorted(int arr[], int *size, int num) 
{
    int i, j;

    for (i = 0; i < *size; i++) 
	{
        if (arr[i] > num) 
		{
            break;
        }
    }

    for (j = *size; j > i; j--) 
	{
        arr[j] = arr[j - 1];
    }

    arr[i] = num;

    (*size)++;
}

void displayArray(int arr[], int size) 
{
    printf("Array: [");
    for (int i = 0; i < size; i++) 
	{
        printf("%d", arr[i]);
        if (i != size - 1) 
		{
            printf(", ");
        }
    }
    printf("]\n");
}

int main() 
{
    int arr[100];
    int size = 0;
    int num;

    printf("Enter numbers in sorted order (Enter -1 to stop):\n");

    while (1) 
	{
        printf("Enter number: ");
        scanf("%d", &num);

        if (num == -1) 
		{
            break;
        }

        insertSorted(arr, &size, num);
    }

    displayArray(arr, size);

    return 0;
}
