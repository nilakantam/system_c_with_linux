#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define N 100
#define MAX 20
int split_words(char *str , char *words[MAX]);

int main()
{
	char str[N];
	char *words[MAX];
	char i;

	printf("Enter the string seperated by pipeline:\n");
	fgets(str , N-1 , stdin);
	if(str[strlen(str) -1] == '\n')
		str[strlen(str) - 1] = '\0';

	int count = split_words(str,words);
	for( i = 0 ; i <= count ; i++)
		puts(words[i]);

	return 0;
}

int split_words(char *str , char *words[MAX])
{
	int count = 0;

	char *token = strtok(str , "|");
	while(token != NULL)
	{
		
		words[count] = (char*) malloc(strlen(token)*sizeof(char)+1);
		strcpy(words[count],token);
		count++;
		token = strtok(NULL,"|");
	}
	return count;
}
