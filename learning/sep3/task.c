/* Name - N.Pranathi
Date _ 03-09-2024
Time - 15:28 */
#include<stdio.h>
int main()
{
	int score;
	char grade;
	printf("Enter your score:");
	scanf("%d",&score);
	scanf(" ");
	printf("\nEnter the student score(A,B,C,D or F):");
	scanf("%c",&grade);
	printf("Your score is %d and grade is %c",score,grade);
	return 0;
}
