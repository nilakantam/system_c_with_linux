#include<stdio.h>
#include<string.h>
int main()
{
	int index;
	int a;
	int index2;
	int tmp;
	int len;

	printf("Enter the length of the array\n");
	scanf("%d" , &a);
	char str[a];
	
	fgets(str , a , stdin);
	len = strlen(str);
	if(str[len - 1] == '\n')
		str[len - 1] = '\0';
	
	printf("The length of the aray is %d" , len);

	for (index = 0 ; index < len-2 ; index++)
	{
		for(index2 = 0 ; index2 < len-index-2 ; index2++)
		{
			if((int)str[index2] > (int)str[index2+1])
			{
				tmp = str[index2];
				str[index2] = str[index2+1];
				str[index2+1] = tmp;
			}
		}
	}
	
	printf("\nThe sorted string is:\n");
	puts(str);
	return 0;

}
