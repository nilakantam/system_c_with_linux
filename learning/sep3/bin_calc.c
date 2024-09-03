#include<stdio.h>
#include<stdlib.h>
int main()
{
	float val;
	printf("Enter BIm value:\n");
	scanf("%f",&val);
	if(val<18.5)
		printf("\nUnderweight\n");
	else if(val>18.5 && val<24.9)
		printf("\nnormal weight\n");
	else if(val>25 && val<29.9)
		printf("\nOverweight\n");
	else
		printf("\nObesity\n");
	return EXIT_SUCCESS;
}
