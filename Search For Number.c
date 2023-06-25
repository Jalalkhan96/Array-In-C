#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int searchNumber(int arr[], int size, int target) 
{
    for (int i = 0; i < size; i++) 
	{
        if (arr[i] == target) 
		{
            return i;  
        }
    }
    return -1;  
}

int main() 
{
    int numbers[10];
    int target;

    srand(time(NULL));
    for (int i = 0; i < 10; i++) 
	{
        numbers[i] = rand() % 100;  
    }
    
    printf("Enter a number to search in the array: ");
    scanf("%d", &target);
    
    int result = searchNumber(numbers, 10, target);
    
    if (result != -1) 
	{
        printf("number %d exists at index: %d\n", target, result);
    } 
	else 
	{
        printf("number %d does not exist in the array\n", target);
    }
    
    return 0;
}
