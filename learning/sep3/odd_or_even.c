#include<stdio.h>
int main()
{
	int num;
	printf("Enter the number:\n");
	scanf("%d",&num);
	if(num%2==0)
		printf("%d is a even number",num);
	else
		printf("%d is odd number",num);
	return 0;
}
