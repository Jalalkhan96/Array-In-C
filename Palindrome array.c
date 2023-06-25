#include <stdio.h>
int isPalindrome(int arr[], int size) 
{
    int start = 0;
    int end = size - 1;

    while (start < end) 
	{
        if (arr[start] != arr[end]) 
		{
            return 0; 
        }

        start++;
        end--;
    }

    return 1; 
}

int main() 
{
    int arr[10];

    printf("Enter an array of 10 numbers:\n");

    for (int i = 0; i < 10; i++) 
	{
        printf("Number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    if (isPalindrome(arr, 10)) 
	{
        printf("array is a palindrome.\n");
    } 
	else 
	{
        printf("array is not a palindrome.\n");
    }

    return 0;
}
