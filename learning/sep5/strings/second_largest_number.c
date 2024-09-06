#include<stdio.h>
#include<stdlib.h>
#define N 10
int main()
{
	int arr[N];
	int index;
	int i;
	int j;
	int tmp;
	
	//Taking input from user
	printf("Enter the elements:\n");
	for(index = 0 ; index < N ; index++)
		scanf("%d" , &arr[index]);
	
	//Bubble sort
	for(i = 0 ; i <N-1 ; i++)
	{
		for(j = 0 ; j < N-i-1 ; j++)
		{
			if(arr[j] > arr[j+1])
			{
				tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
		}
	}

	printf("%d\n" , arr[N-2]);
	return EXIT_SUCCESS;
}

	
