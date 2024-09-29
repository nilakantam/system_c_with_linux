#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define N 1000
#define M 100
int take_input(char *str , int* arr1);
void occurence_sum(int *arr1 , int *arr2 , int len1 , int len2);
int main()
{
    char str[N];
    int arr1[M];
    int arr2[M];
    
    int len1 =take_input(str , arr1);
    int len2 = take_input(str , arr2);
    
    occurence_sum(arr1 ,arr2 ,len1 ,len2);
    
    return 0;
}

int take_input(char *str , int* arr1)
{
    int len;
    printf("Enter the array with seperated comma:\n");
    fgets(str , N-1 ,stdin);
    if(str[strlen(str) - 1] == '\n')
        str[strlen(str) - 1] = '\0';
    
    char *token = strtok(str , ",");
    while(token != NULL)
    {
        arr1[len++] = atoi(token);
        token = strtok(NULL ,",");
    }
    return len;
}

void occurence_sum(int *arr1 , int *arr2 , int len1 , int len2)
{
    int index;
    int index2;
    int count;
    
    for(index = 0 ; index < len1 ; index++)
    {
        count = 0;
        for(index2 = 0 ; index2 < len2 ; index2++)
        {
            if(arr1[index] == arr2[index2])
                count++;
        }
        printf("%d-%d\n" , arr1[index] , count);
    }
}
