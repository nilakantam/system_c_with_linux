#include<stdio.h>
#include<math.h>
int main()
{
	unsigned int number;
	int count = 0;
	int tmp;
	int result = 0;
	int rem;
	int tmp2;

	printf("Enter the number\n");
	scanf("%d",&number);
	tmp = number;
	tmp2 = number;

	while(number != 0)
	{
		number = number / 10;
		count = count + 1;
	}

	while(tmp != 0)
	{
		rem = tmp % 10;
		result = result + pow(rem,count);
		tmp = tmp/10;
	}
	
	if(tmp2 == result)
		printf("Armstrong number");
	else
		printf("Not an Armstrong number");
	return 0;
}


		

