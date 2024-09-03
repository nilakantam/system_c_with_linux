#include<stdio.h>
#include<stdlib.h>
int main()
{
	char vowel;
	printf("Enter a alphabet\n");
	scanf("%c",&vowel);
	switch(vowel)
	{
		case 'a':
			printf("%c is vowel",vowel);
			break;
		case 'e':
			printf("%c is vowel",vowel);
			break;
		case 'i':
			printf("%c is vowel",vowel);
			break;
		case 'o':
			printf("%c is vowel",vowel);
			break;
		case 'u':
			printf("%c is vowel",vowel);
			break;
		default:
			printf("Not a Vowel");
	}
	return EXIT_SUCCESS;
}
