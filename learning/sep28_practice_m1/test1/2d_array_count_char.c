#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define N 1000
void take_input(int len ,char *arr[]);
int count(char *arr[] , int len);
int main()
{
    int len;
    int index;
    char *arr[100];
    
    printf("Enter the number of lines u want:\n");
    scanf("%d" , &len);
    take_input(len , arr);   
    
    //entered strings into 2d array
    printf("The 2d array of string");
    for(index = 0 ; index <= len ; index++)
        puts(arr[index]);
    
    int sum = count(arr , len);
    printf("The count of indexes is:\n");
    printf("%d" , sum);
    return 0;
}

void take_input(int len ,char *arr[])
{
    int index;
    //int count = 0;
    char str[N];
    
    printf("Enter the strings:\n");
    for(index = 0 ; index <= len ; index++)
    {
        fgets(str , N-1 , stdin);
        if(str[strlen(str) - 1] == '\n')
            str[strlen(str) - 1] ='\0';
        arr[index] = (char *) malloc(sizeof(char)*strlen(str)+1);
        strcpy(arr[index] , str);
    }
}

int count(char *arr[] , int len)
{
    char c;
    int sum = 0;
    int index1;
    int index2;
    
    printf("Enter the character you want to search for:\n");
    scanf("%c" , &c);
    getchar();
    
    for(index1 = 0 ; index1 <= len ; index1++)
    {
        for(index2 = 0 ; index2 < strlen(arr[index1]) ; index2++)
        {
            if(arr[index1][index2] == c)
            {
                sum = sum + index2;
            }
        }
    }
    return sum;
}
