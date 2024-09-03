/* Name - N.Pranathi
Date - 03-09-2024
Time - 14:30 */

#include<stdio.h>
int main()
{
	int weight;
	int height;
	float res;
	printf("Enter weight:\n");
	scanf("%d",&weight);
	printf("Enter height:\n");
	scanf("%d",&height);
	res=weight/(height*height);
	printf("Body Mass Index is %.2f",res);
	printf("\n");
	return 0;
}

