#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define N 1000
#define M 100
 
int take_input(char *str , char *arr[]);
int unique(char *arr[] , int len , char *uni[]);
int main()
{
    char str[N];
    char *arr[N];
    int index;
    int len = take_input(str , arr);
    
    char *uni[len];
    int len2 = unique(arr , len , uni);
    printf("Seperated string:\n ");
    for(index = 0 ; index < len ; index++){
        puts(arr[index]);
        free(arr[index]);
    }
    printf("Unique elements:\n");
    for(index = 0 ; index < len2 ; index++){
        puts(uni[index]);
        free(uni[index]);
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

int unique(char *arr[] , int len , char *uni[])
{
    int index1;
    int index2;
    int count;
    int j = 0;
    
    for(index1 = 0 ; index1 < len ; index1++){
        count =0 ;
        for(index2 = 0 ; index2 < len ; index2++){
            if(strcmp(arr[index1] , arr[index2]) ==0){
                count++;
            }
        }
        if(count == 1)
        {
            uni[j] = (char *)malloc(strlen(arr[index1])+1);
            strcpy(uni[j] , arr[index1]);
            j++;
        }
    }
    return j;
}
