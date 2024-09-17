#include<stdio.h>
#include<string.h>
#define N 100

int main()
{
	char str[N];

	printf("Enter the string:\n");
	fgets(str , N-1 , stdin);
	if(str[strlen(str) - 1] == '\n')
		str[strlen(str) - 1] = '\0';
	
	capitalize(str);

	return 0;
}

void capitalize( char *str);
{
	int *token = strtok(str , " ,.?\n");
	char *str2;

	while(token != NULL)
	{
		str2 = 
