#include<stdio.h>
#include<stdlib.h>
#define N 10
int main()
{
	int arr[N];
	int index;
	int element;

	printf("Enter the elements:\n");
	for(index = 0 ; index < N ; index++)
	{
		scanf("%d",&arr[index]);
	}
	
	printf("Enter the element you want to search for:\n");
	scanf("%d",&element);
	for(index = 0 ; index < N ; index++)
	{
		if(arr[index] == element)
			printf("the index is %d\n",index);
	}
	return EXIT_SUCCESS;
}


