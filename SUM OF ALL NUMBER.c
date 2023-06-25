#include <stdio.h>

int main() 
{
    int arr[] = {2, 7, 9, 3, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;

    for (int i = 0; i < size; i++) 
	{
        sum = sum + arr[i];
    }

    printf("sum of the numbers in the array is: %d\n", sum);

    return 0;
}
