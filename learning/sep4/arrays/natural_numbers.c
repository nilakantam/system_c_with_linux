#include<stdio.h>
#define N 10
int main()
{

	int arr[N];
	int ref=1;
	int index;

	for(index = 0 ; index < N ; index++)
	{
		arr[index] = ref;
		ref=ref+1;
	}

	printf("The Elements are:\n");
	for(index = 0 ; index < N ; index++)
	{
		printf("%d ",arr[index]);
	}
	printf("\n");
	return 0;
}


