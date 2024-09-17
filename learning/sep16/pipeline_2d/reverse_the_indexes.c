
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define N 100
#define M 10

int seperate_words(char *str , char *arr[]);
void reverse_index(char *arr[] , int count);

int main()
{
	char str[N];
	char *arr[M];
	int index;

	printf("Enter the pipe seperated string:");
	fgets(str , N-1 , stdin);
	if(str[strlen(str) - 1] == '\n')
		str[strlen(str) - 1 ] = '\0';

	int count = seperate_words(str , arr);
	printf("Theseperated array:\n");	
	for(index = 0 ; index < count ; index++)
	{
		puts(arr[index]);
//		free(arr[index]);
	}
	
	reverse_index(arr , count);

	printf("The reverse strings are:\n");
	for(index = 0 ; index < count ; index++)
	{
		printf("%s",arr[index]);
		free(arr[index]);
		if(index < count-1)
			printf("|");
	}
	printf("\n");
	return 0;
}

int seperate_words(char *str , char *arr[])
{
	int count = 0;
	 
	char *token = strtok(str , "|");
	while(token != NULL)
	{
		arr[count] = (char*) malloc(strlen(token)+1);
		strcpy(arr[count] , token);
		token = strtok(NULL , "|");
		count++;
	}

	return count;
}

void reverse_index(char *arr[] , int count)
{
	int index;
	char *tmp;

	for(index = 0 ; index < count/2 ; index++)
	{
		tmp = arr[index];
		arr[index] = arr[count-index-1];
		arr[count-index-1] = tmp;
	}
}

