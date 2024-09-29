#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define N 1000
#define M 100
 
int take_input(char *str , char *arr[]);
void sort_bylength(char *arr[] , int len );
int main()
{
    char str[N];
    char *arr[N];
    int index;
    int len = take_input(str , arr);
    sort_bylength(arr , len);
    
    printf("sorted by length string:\n ");
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

void sort_bylength(char *arr[] , int len )
{
    int index1;
    int index2;
    char tmp[1000];
    for(index1 = 0 ; index1 < len ; index1++)
    {
        for(index2 = 0 ; index2 < len- index1-1 ; index2++)
        {
            if(strlen(arr[index2]) > strlen(arr[index2+1]))
            {
                strcpy(tmp , arr[index2]);
                strcpy(arr[index2] , arr[index2+1]);
                strcpy(arr[index2+1] , tmp); 
            }
        }
    }
}
