#include <stdio.h>

int main() 
{
    int numbers[5];
    int max, maxIndex;

    printf("Enter 5 numbers:\n");

    for (int i = 0; i < 5; i++) 
	{
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    max = numbers[0];
    maxIndex = 0;

    for (int i = 1; i < 5; i++) 
	{
        if (numbers[i] > max) 
		{
            max = numbers[i];
            maxIndex = i;
        }
    }

    printf("index of the maximum value is: %d\n", maxIndex);

    return 0;
}
