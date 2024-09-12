#include<stdio.h>
#include<stdlib.h>
#define N 10
int main()
{
	int arr[N];
	int *p;
	int index;
	int ele;
	int *p2;

	p = arr;
	p2 = &ele;
	printf("Enter the 10 elements:\n");
	for(index = 0 ; index  < N ; index++)
		scanf("%d" , p+index);
	
	printf("Enter the element to find:\n");
	scanf("%d" , p2);
	for(index = 0 ; index < N ; index++)
	{
		if(*(p + index) == *p2)
			printf("%d\n" , index);
	}
	
	return 0;
}

	
