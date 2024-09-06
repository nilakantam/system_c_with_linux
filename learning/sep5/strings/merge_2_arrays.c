#include<stdio.h>
#include<stdlib.h>
#define N 10

int main()
{
	int arr1[N];
	int arr2[N];
	int len1;
	int len2;
	int index;
	int rem;

	printf("Enter the 10 elements for array1\n");
	for(index = 0; index < N ; index++)
	{
		scanf("%d",&arr1[index]);
	}

	printf("Enter the 10 elements for array2\n");
	for(index = 0; index < N ; index++)
	{
		scanf("%d",&arr2[index]);
	}

	len1 =sizeof(arr1)/sizeof(int);
	len2 =sizeof(arr2)/sizeof(int);
	int merged_array[len1+len2];
	
	if(len1>len2)
		rem = len1;
	else
		rem = len2;

	for(index = 0 ; index < rem ; index++)
	{
		merged_array[index] = arr1[index];
		merged_array[index+len1] = arr2[index];
	}

	printf("The elements of merged array are\n");
	for(index = 0; index < len1+len2 ; index++)
	{
		printf("%d ",merged_array[index]);
	}
	return EXIT_SUCCESS;
}
			

