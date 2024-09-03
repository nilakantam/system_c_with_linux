#include<stdio.h>
#include<stdlib.h>
int main()
{
	int marks;
	printf("Enter the marks:\n");
	scanf("%d",&marks);
	if(marks>=90)
		printf("Grade A");
	else if(marks>=80)
		printf("Grade B");
	else if(marks>=70)
		printf("Grade C");
	else if(marks>=60)
		printf("Grade D");
	else if(marks<60)
		printf("Fail");
	return EXIT_SUCCESS;
}
