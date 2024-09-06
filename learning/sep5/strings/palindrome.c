#include<stdio.h>
#include<stdlib.h>
#define N 10
int main()
{
	int arr[N];
	int index;
	int count=0;
	int index1;
	int index2;

	//Taking input from the user
	printf("Enter the N elements\n");
	for(index = 0 ; index < N ; index++)
		scanf("%d",&arr[index]);
	
	//checking whether the first half and last half elements are same or not
	int end = N/2;
	for(index1 = 0 , index2 = N-1; index1 < end ; index1++ ,index2--)
	{
		if(arr[index1] == arr[index2])
			count++;//count represents how many are matched
	}
	
	//printing palindrome or not
	if(end == count)
		printf("Array is plaindrome\n");
	else 
		printf("Array is not a palindrome\n");

	return EXIT_SUCCESS;
}


