#include<stdio.h>
#include<stdlib.h>
int find_dup(int *arr , int c , int *dup);
void sort(int *arr , int c);
int find_miss(int *dup , int c , int *miss);
int main()
{
    int c;
    int index;
    
    printf("Enter the number of elements:\n");
    scanf("%d" , &c);
    
    int arr[c];
    printf("Enter the array elements:\n");
    for(index = 0 ; index < c ; index++)
        scanf("%d" , &arr[index]);
    
    int dup[c];
    int  p = find_dup(arr , c , dup);
    printf("\nThe repeated elements:\n");
    for(index = 0 ; index < p ; index++)
        printf("%d " , dup[index]);
        
    printf("\nThe sorted array is:\n");
    for(index = 0 ; index < c ; index++)
        printf("%d " , arr[index]);
    
    int miss[c];
    int mis = find_miss(dup , c , miss);
    printf("\nThe missed elements:\n");
    for(index = 0 ; index < mis ; index++)
        printf("%d" , miss[index]);
        
    return 0;
}

int find_dup(int *arr , int c , int *dup)
{
    int index;
    int p=0;
    sort(arr , c);
    for(index = 0 ; index < c-1 ; index++)
    {
        if(arr[index] == arr[index+1])
        {
            dup[p++] = arr[index];
            index++;
        }
    }
    return p;
}

void sort(int *arr , int c)
{
    int index1;
    int index2;
    int tmp;
    for(index1 = 0 ; index1 < c ; index1++)
    {
        for(index2 = 0 ; index2 < c-index1-1 ; index2++)
        {
            if(arr[index2] > arr[index2+1])
            {
            tmp = arr[index2];
            arr[index2] = arr[index2+1];
            arr[index2+1] = tmp;
            }
        }
    }
}

int find_miss(int *dup , int c , int *miss)
{
    int p = 0;
    int index;
    
    for(index = 0 ; index < c ; index++)
    {
        if(dup[index]-dup[index+1] != 1 && dup[index]-dup[index+1] !=0)
        {
            int  r = dup[index] - dup[index+1];
            for(;r != 0 ; r++)
                miss[p++] = dup[index]+1;
        }
    }
    return p;
}
