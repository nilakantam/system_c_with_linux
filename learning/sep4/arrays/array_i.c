#include<stdio.h>
#include<stdlib.h>
#define N 5
int main()
{

	int arr[N];
	int index;
	
	printf("Enter array elements\n");
	for(index = 0 ; index < N ; index++)
	{
		scanf("%d",&arr[index]);
	}
	
	printf("The Elements are:\n");
	for(index = 0 ; index < N ; index++)
	{
		printf("%d\n",arr[index]);
	}

	return 0;
}


