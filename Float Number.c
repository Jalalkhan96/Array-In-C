#include <stdio.h>
int main()
{
	float numbers[5] = {1.5,2.3,3.7,4.1,5.9};
	printf("array elements: ");
	for (int i=0;i<5;i++)
	{
		printf("%.2f ",numbers[i]);
	}
	printf("\n");
	return 0;
}