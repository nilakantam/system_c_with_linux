#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define N 10
#define M 100

int seperate_words(char *str , char *words[]);
int sort(char *words[] , int count);
int main()
{
	char str[M];
	char *words[N];
	int index;
	int count;
	int c;
	
	printf("Enter the string seperated by pipeline:\n");
	fgets(str , N-1 , stdin);
	if(str[strlen(str) -1] == '\n')
		str[strlen(str) -1] = '\0';
	
	count = seperate_words(str , words);
	c = sort(words , count);
	
	printf("The sorted string:\n");
	for(index = 0 ; index < c ; index++)
	{
		printf("%s\n" , words[index]);
		free(words[index]);
	}
	return 0;
}

int seperate_words(char *str , char *words[])
{
	int count = 0 ;
	char *token = strtok(str , "|");

	while(token != NULL)
	{
		words[count] = (char*) malloc(sizeof(char)*strlen(token)+1);
		strncpy(words[count] , token , strlen(token));
		token = strtok(NULL , "|");
		count++;
	}

	return count;
}

int sort(char *words[] , int count)
{
	int c;
	char tmp[100];
	int index;
	int index1;

	for(index = 0 ; index < count-1 ; index++)
	{
		for(index1 = 0 ; index1 < count-index-1 ; index1)
		{
			if(words[index1] > words[index1+1])
			{
				strcpy(tmp , words[index1]);
				strcpy(words[index1] , words[index1+1]);
				strcpy(words[index1+1] , tmp);
			}
		}
	}

	return c;

}

