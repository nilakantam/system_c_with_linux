#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	double number;
	double tmp;
	int r;
	printf("Enter the number\n");
	scanf("%lf",&number);
	if(number < 9999999 && number > 0)
	{	
		tmp=sqrt(number);
		r=(int) round(tmp);
		printf("The nearest number for %.0lf is %d",number,r*r);
		printf("\n");
	}
	return 0;
}

	
			
