#include <stdio.h>
int main() 
{
    int numbers[5];
    int max;

    printf("Enter 5 numbers:\n");

    for (int i = 0; i < 5; i++) 
	{
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    max = numbers[0];

    for (int i = 1; i < 5; i++) 
	{
        if (numbers[i] > max) 
		{
            max = numbers[i];
        }
    }

    printf("maximum value is: %d\n", max);

    return 0;
}
