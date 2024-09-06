#include<stdio.h>
#include<stdlib.h>
#define N 10
int main()
{
	int arr[N];
	int index;

	printf("Enter 10 Elements\n");
	for(index = 0 ; index < N ; index++)
	{
		scanf("%d",&arr[index]);
	}
	

	printf("The reverse elements of array are");
	for(index = N-1 ; index >= 0 ; index--)
	{
		printf("%d ",arr[index]);
	}

	return EXIT_SUCCESS;
}
