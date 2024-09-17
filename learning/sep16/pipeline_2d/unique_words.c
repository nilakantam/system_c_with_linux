#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define N 100
#define M 10

int seperate_words(char *str, char *arr[]);
int unique_elements(char *arr[] , char *res[] , int count);


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
	char *res[count];
	int c = unique_elements(arr , res , count);
	
	printf("The unique strings are\n");
	for(index = 0 ; index < c ; index++)
	{
		puts(res[index]);
		//free(res[index]);
		//free(arr[index]);
	}
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

int unique_elements(char *arr[] , char *res[] , int count)
{
	int index;
	int index1;
	int j=0;
	//int dup_arr[count];
	int count1;

//	memset(dup_arr , 0 , count);
	for(index = 0 ; index < count ; index++)
	{
		count1 = 0 ;
		for(index1 = 0 ; index1  < count ; index1++)
		{
			if(strcmp(arr[index] , arr[index1]) == 0)
				{
					count1++;
				}
		}
		if(count1 == 1 )
		{
			res[j] = (char*) malloc(strlen(arr[index])*sizeof(char)+1);
			strcpy(res[j], arr[index]);
            j++;
        }
    }
    return j;
}
