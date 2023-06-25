#include <stdio.h>

void reverseArray(int arr[], int size) 
{
    int start = 0;
    int end = size - 1;

    while (start < end) 
	{
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

void displayArray(int arr[], int size) 
{
    printf("Reversed Array: [");
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
    int arr[] = {2, 7, 9, 3, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original Array: [");
    for (int i = 0; i < size; i++) 
	{
        printf("%d", arr[i]);
        if (i != size - 1) 
		{
            printf(", ");
        }
    }
    printf("]\n");

    reverseArray(arr, size);

    displayArray(arr, size);

    return 0;
}
