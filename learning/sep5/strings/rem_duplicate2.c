
#include<stdio.h>
#include<stdlib.h>
#define N 10
int main()
{
	int arr[N];
	int index;
	int tmp;
	int i;
	int j;
	int arr2[N];
	int index2 = 0;
	int count =1;
	
	//taking input from user
	printf("Enter the 10 elements:\n");
	for(index = 0 ; index < N ; index++)
	{
		scanf("%d",&arr[index]);
	}
	
	//Bubble sort
	for(i = 0 ; i < N-1 ; i++)
	{ 
		for(j = 0 ; j < N-1-i ; j++)
		{
			if(arr[j] > arr[j+1])
			{
				tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
		}
	}
	
	//Removing the duplicate elements
	arr2[index2] = arr[0];
	index2++;
	for(i = 0 ; i < N-1 ; i++)
	{
		if(arr[i] != arr[i+1])
		{
			arr2[index2] = arr[i+1];
			index2++;
			count++;
		}
	}
	
	//printing array 2
	printf("The sorted elements are:\n");
	for(index = 0 ; index < count ; index++)
	{
		printf("%d\n",arr2[index]);
	}

	return EXIT_SUCCESS;
}


