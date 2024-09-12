#include<stdio.h>
#include<string.h>
#define N 10
int main()
{
	char str[N];
	int index;
	char ele;

	printf("Enter the string\n");
	fgets(str , N , stdin);
	
	int len = strlen(str);
	if(str[len - 1] == '\n')
		str[len - 1] = '\0';
	
	puts(str);

	scanf("%c" , &ele);
	for(index = 0; index < len-1 ; index++)
	{ 
		if(str[index] == ele)
			printf("%d" , index);
	}

	return 0;
}



