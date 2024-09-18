#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define M 100

int search_index(char *arr[] , int N , char a);
int main()
{
	int len;
	int index;
	int N;
	char a;
	//char *p = &a;
	
	printf("Enter the N value\n");
	scanf("%d" , &N);
	
	char *arr[N];
	for(index = 0 ; index <= N ; index++)
	{	
		arr[index] = (char*) malloc(M);
	}

	
	printf("Enter the strings\n");
	for(index = 0 ; index <= N ; index++)
	{
		fgets(arr[index] , M-1 , stdin);
		len  = strlen(arr[index]);
		if(arr[index][len - 1] == '\n')
			arr[index][len - 1] = '\0';
	}

	printf("Enter the character\n");
	scanf("%c" , &a);

	int sum = search_index(arr , N , a);
	printf("%d\n" , sum);
	return 0;
}

int search_index(char *arr[] , int N , char a)
{
	int index;
	int index1;
	int sum = 0; 
	for(index = 0 ; index <= N ; index++)
	{
		printf("%s -" , arr[index]);
		for(index1 = 0 ; index1 < strlen(arr[index]) ; index1++)
		{
			if(a == arr[index][index1])
			{
				printf(" %d" , index1 );
				sum = sum + index1;
			}
		}
		printf("\n");
	}

	return sum;
}
