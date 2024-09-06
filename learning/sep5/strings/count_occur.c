#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 10
int main()
{
	int arr[N];
	int index;
	int duplicate[N];
	int j;
	int count;

	printf("Enter 10 Elements\n");
	for(index = 0 ; index < N ; index++)
	{
		scanf("%d",&arr[index]);
	}
	
	memset(duplicate , 0 , sizeof(duplicate));

	for(index = 0 ; index < N ; index++)
	{
		if(duplicate[index] == 0)
		{
			count=1;
			for(j = index+1 ; j < N ; j++)
		
			{
				if(arr[index]  == arr[j])
				{
					count = count + 1;
					duplicate[j] = 1;
				}
			}
		}
		if(count>1)
		{
			printf("The count of %d is %d",arr[index],count);
			printf("\n");
		}
	}


	return EXIT_SUCCESS;
}
