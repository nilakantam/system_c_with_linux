#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define N 100
#define M 10

int seperate_words(char *str , char *arr[]);
void sort(char *arr[] , int count);
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

	sort(arr , count);
	
	printf("The sorted strings based on the length are:\n");
	for(index = 0 ; index < count ; index++)
	{
		puts(arr[index]);
		free(arr[index]);
	}
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

void sort(char *arr[] , int count)
{
	int index1;
	int index2;
	char *tmp;

	for(index1 = 0 ; index1 < count-1 ; index1++)
	{
		for(index2 = 0 ; index2 < count-index1-1 ; index2++)
		{
			if(strlen(arr[index2]) > strlen(arr[index2+1]))
			{
				tmp = arr[index2];
				arr[index2] = arr[index2+1];
				arr[index2+1] = tmp;
			}
		}
	}
}

