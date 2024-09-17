#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define N 100
#define M 10

int seperate_words(char *str, char *arr[]);
void reverse_string(char *arr[] , int count);
int main()
{
	char str[N];
	char *arr[M];
	int index;
	
	printf("Enter the string with pipe seperated\n");
	fgets(str , N-1 , stdin);
	if(str[strlen(str) - 1] == '\n')
		str[strlen(str) -1] = '\0';
	
	int count = seperate_words(str , arr);
	printf("The seeprated String:\n");
	for(index = 0 ; index  < count ; index++)
		puts(arr[index]);

	reverse_string(arr , count);
	printf("The seeprated String:\n");
	for(index = 0 ; index  < count ; index++)
	{
		printf("%s" , arr[index]);
		free(arr[index]);
		if(index < count-1)
			printf("|");
	}
	printf("\n");
	return 0;
}

int seperate_words(char *str, char *arr[])
{
	int count = 0;
	char *token = strtok(str , "|");

	while(token != NULL)
	{
		arr[count] = (char*) malloc(sizeof(char)*strlen(token)+1);
		strcpy(arr[count] , token);
		token = strtok(NULL , "|");
		count++;
	}

	return count;
}

void reverse_string(char *arr[] , int count)
{
	int index1; 
	int index2;
	char tmp;

	for(index1 = 0 ; index1 < count ; index1++)
	{
		for(index2 = 0 ; index2 < (strlen(arr[index1])/2) ; index2++)
		{
			tmp = arr[index1][index2];
			arr[index1][index2] = arr[index1][strlen(arr[index1])-index2-1];	
			arr[index1][strlen(arr[index1])-index2-1] = tmp;
		}
	}
}

