#include <stdio.h>

void findDifferentNumbers(int arr1[], int size1, int arr2[], int size2) 
{
    printf("Numbers that are different in the two arrays are: ");

    for (int i = 0; i < size1; i++) 
	{
        int found = 0;
        for (int j = 0; j < size2; j++) 
		{
            if (arr1[i] == arr2[j]) 
			{
                found = 1;
                break;
            }
        }
        if (!found) 
		{
            printf("%d ", arr1[i]);
        }
    }

    for (int i = 0; i < size2; i++) 
	{
        int found = 0;
        for (int j = 0; j < size1; j++) 
		{
            if (arr2[i] == arr1[j]) 
			{
                found = 1;
                break;
            }
        }
        if (!found) 
		{
            printf("%d ", arr2[i]);
        }
    }

    printf("\n");
}

int main() 
{
    int arr1[] = {2, 7, 9, 3, 6};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {3, 5, 7, 9, 10};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    findDifferentNumbers(arr1, size1, arr2, size2);

    return 0;
}
