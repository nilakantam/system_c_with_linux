#include<stdio.h>
#include<string.h>
#define N 10
int main()
{
	int a[N];
	int b[N];
	int *ptr = a;
	int *ptr2 = b;
	int index;
	int j;

	printf("Enter the 10 elements\n");
	for(index = 0 ; index < N ; index++)
		scanf("%d" , ptr+index);

	for(index = N-1 , j=0 ; index >= 0 ; index-- , j++)
		*(ptr2 + j) = *(ptr + index);
	
	printf("The reversed elements are:\n");
	for(index = 0 ; index < N ; index++)
		printf("%d " , *(ptr2 + index));
	
	return 0;
}
	
