#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define N 1000
#define M 100
 
int take_input(char *str , char *arr[]);
void reverse(char *arr[] , int len);
int main()
{
    char str[N];
    char *arr[N];
    int index;
    
    int len = take_input(str , arr);
    reverse(arr , len);
    printf("reverse string:\n ");
    for(index = 0 ; index < len ; index++){
        puts(arr[index]);
        free(arr[index]);
    }
    return 0;
}
 
int take_input(char *str , char *arr[])
{
    int len;
    printf("Enter the input with pipe seperated string:\n");
    fgets(str , N-1 , stdin);
    if(str[strlen(str) - 1] == '\n')
        str[strlen(str) - 1] = '\0';
    char *token = strtok(str ,"|");
    while(token != NULL)
    {
        arr[len] = (char *) malloc(strlen(token)+1);
        strcpy(arr[len] , token);
        token = strtok(NULL ,"|");
        len++;
    }
    return len;
}

void reverse(char *arr[] , int len)
{
    int index1;
    int index2;
    char tmp;
    for(index1 = 0 ; index1 < len ; index1++)
    {
        for(index2 = 0 ; index2 < strlen(arr[index1])/2 ; index2++)
        {
            tmp = arr[index1][index2];
            arr[index1][index2] = arr[index1][strlen(arr[index1])-index2-1];
            arr[index1][strlen(arr[index1])-index2-1] = tmp;
        }
    }
}
