#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#define N 100
#define M 10

int seperate_words(char *str, char *words[]);
//void captilise(char *words[] , int count);
int main()
{
	char str[N];
	char *words[M];
	int count;
	int index;

	printf("Enter the string :\n");
	fgets(str , N-1 , stdin);
	if(str[strlen(str) -1] == '\n')
		str[strlen(str) -1] = '\0';
	
	count = seperate_words(str , words);
//	captilise(words , count);

	printf("Last word captised words");
	for(index = 0 ; index < count ; index++)
	{
		printf("%s ",words[index]);
		free(words[index]);
	}
	return 0;
}

int seperate_words(char *str , char *words[])
{
	int count = 0;
	char *token = strtok(str , " ,.");
	
	while(token != NULL)
	{
		words[count] = (char*) malloc(strlen(token)+1);
		strcpy(words[count] , token);
		words[count][strlen(token)-1] = toupper(words[count][strlen(token)-1]);
		token = strtok(NULL , " ,.");
		count++;
	}
	return count;

}

/*void captilise(char *words[] , int count)
{
	int index;

	for(index = 0 ; index < count ; index++)
	{
		toupper(words[index][strlen(words[index] - 2)]);
	}
}
*/
