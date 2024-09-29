#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define N 100
#define M 1000
int take_input(char *str , int *arr1);
void largest(int *arr1 , int *arr2 , int len1 , int len2);
int frequency(int c  , int *arr2 , int len2);
int main()
{
    char str[N];
    int arr1[M];
    int arr2[M];
    int index;
    
    int len1 = take_input(str , arr1);
    int len2 = take_input(str , arr2);
    //printf("The first array:\n");
    //for(index = 0 ; index < len1 ; index++)
    //    printf("%d " , arr1[index]);
    
    largest(arr1 , arr2 , len2 , len2);
    return 0;
}

int take_input(char *str , int *arr1)
{
    int index;
    printf("Enter the string:");
    fgets(str , N-1 , stdin);
    if(str[strlen(str) - 1] == '\n')
        str[strlen(str) - 1] = '\0';
    
    char *token = strtok(str , ",");
    while(token != NULL)
    {
        arr1[index++] = atoi(token);
        token= strtok(NULL ,",");
    }
    return index;
}

void largest(int *arr1 , int *arr2 , int len1 , int len2)
{
    int index;
    int count =0 ;
    int max_len = 0;
    int max_index = 0;    
    for(index = 0 ; index < len1 ; index++)
    {
        count = frequency(arr1[index] , arr2 , len2);
        if(count > max_len)
        {
            max_len = count;
            max_index = index;
        }
    }
    printf("%d - %d" , arr1[max_index] , count);
}

int frequency(int c  , int *arr2 , int len2)
{
    int index;
    int count = 0;
    for(index = 0 ; index < len2 ; index++)
    {
        if( c == arr2[index])
            count++;
    }
    return count;
}
