#include <stdio.h>
int main()
{
	int numbers[5]= {1,2,3,4,5};
	printf("array elements: ");
	for (int i=0;i<5;i++)
	{
		printf("%d ",numbers[i]);
	}
	printf("\n");
	return 0;
}