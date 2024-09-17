#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#define N 100
#define M 10
int seperate_words(char *str , char *arr[]);
int remove_duplicates(char *arr[] , char *arr2[] ,int count);
int main()
{
	char *arr[M];
	char str[N];
	int index;
	
	printf("Enter the string:\n");
	fgets(str , N , stdin);
	if(str[strlen(str) - 1] == '\n')
		str[strlen(str) - 1] = '\0';

	int count = seperate_words(str , arr);
	char *arr2[count];
	int c = remove_duplicates(arr , arr2 , count);
	printf("The removed duplicate string is:\n");
	for(index = 0 ; index < c ; index++)
	{
		puts(arr2[index]);
	}

	return 0;
}


int seperate_words(char *str , char *arr[])
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

int remove_duplicates(char *arr[] , char *arr2[] ,int count)
{
	int index;
	int index2 ;
	int j = 0;

	for(index = 0 ; index < count ; index++)
	{
		bool duplicate = false;
		for(index2 = 0 ; index2 < j ; index2++)
		{
			if(strcmp(arr[index] , arr2[index2]) == 0)
			{
				duplicate = true;
				break;
			}
		}
		if(duplicate == false)
		{
			arr2[j] = arr[index];
			j++;
		}
		
	}

	return j;
}
			
		
