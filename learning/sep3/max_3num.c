/* Name - N.Pranathi
Date - 03-09-2024
Time - 14:16 */

#include<stdio.h>
int main()
{
	int a;
	int b;
	int c;
	int max;
	printf("Enter the value of a,b and c with spaces\n");
	scanf("%d %d %d",&a,&b,&c);
	max=(a>b)?((a>c)?a:c):((b>c)?b:c);
	printf("\nThe maximum number is: %d",max);
	printf("\n");
	return 0;
}
