#include<stdio.h>
#include<stdlib.h>
#define SIZE_R 2
#define SIZE_C 2
int main()
{
	int arr[SIZE_R][SIZE_C];
	int index_r;
	int index_c;
	int trans[SIZE_R][SIZE_C];
	//Read the input from the user
	printf("Enter the elements :\n");
	for(index_r = 0 ; index_r < SIZE_R ; index_r++)
	{
		for(index_c = 0 ; index_c < SIZE_C ; index_c++)
		{
			scanf("%d", &arr[index_r][index_c]);
		}
		printf("\n");
	}
	
	//Tranversing the matrix
	for(index_r = 0 ; index_r < SIZE_R ; index_r++)
	{
		for(index_c = 0 ; index_c < SIZE_C ; index_c++)
		{
			trans[index_c][index_r] = arr[index_r][index_c];
		}
	}

	//printing the array
	printf(" The elements are :\n");
	for(index_r = 0 ; index_r < SIZE_C ; index_r++)
	{
		for(index_c = 0 ; index_c < SIZE_R ; index_c++)
		{
			printf("%d\t", trans[index_r][index_c]);
		}
		printf("\n");
	}
				
	return EXIT_SUCCESS;
}


