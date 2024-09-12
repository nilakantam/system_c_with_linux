#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 10
int main()
{
	char str[MAX];
	char *p = str;
	int len;
	char rev[MAX];
	int index;
	char tmp;

	printf("Enter the string:\n");
	fgets(str , MAX , stdin);


	len = strlen(str);
	if(str[len - 1] == '\n')
		str[len - 1] = '\0';
	
//	strncpy(rev , str , len);
	for(index = len-2 , tmp = 0 ; index >= 0 ; index-- , tmp++)
	{
		rev[tmp] = str[index];
	}
	rev[tmp] = '\0';

	puts(rev);

	puts( str);

	return EXIT_SUCCESS;
}

