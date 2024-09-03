#include<stdio.h>
int main()
{
	int grade;
	printf("Enter the score\n");
	scanf("%d",&grade);
	if(grade<100 && grade>90)
		printf("\nA is the grade for %d",grade);
	else if(grade<89 && grade>80)
		printf("\nB is the grade for %d",grade);
	else if(grade<79 && grade>70)
		printf("\nC is the grade for %d",grade);
	else if(grade<69 && grade>60)
		printf("\nD is the grade for %d",grade);
	else
		printf("\nE is the grade for %d",grade);
	return 0;
}

