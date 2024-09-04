#include<stdio.h>
int main()
{
	int number;
	int res;
	int count;
	int dir;
	int rem;
	int tmp;
	
	printf("Enter the number\n");
	scanf("%d",&number);
	
	tmp=number;
	res= number*number;
	count = 0;
	while(number!=0)
	{
		number=(int)number/10;
		count=count+1;
	}
	
	for(dir =1;count!=0;count--)
	{
		dir=dir*10;
	}
	rem = res % dir;
	
	if(rem == tmp)
		printf("%d is an automorphic number",tmp);
	else
		printf("%d is not an automorphic number",tmp);
	return 0;
}
	

