#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a;
	int b;
	int num;
	printf("Enter the values of a and b with spaces:\n");
	scanf("%d %d",&a,&b);
	printf("Enter the number:\n");
	scanf("%d",&num);
	printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division");
	switch(num)
	{
		case 1:
			printf("The sum is %d",a+b);
			break;
		case 2:
			printf("The subraction value is %d",a-b);
			break;
		
		case 3:
			printf("The product is %d",a*b);
			break;

		case 4:
			printf("The division valueis %.2f",(float)a/b);
			break;
		default:
			printf("no operation performed");
	}
	printf("\n");
	return EXIT_SUCCESS;

}
