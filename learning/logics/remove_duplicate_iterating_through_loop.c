#include<stdio.h>
#include<stdbool.h>
#define N 10
int main()
{
    int arr[N];
    int index;
    int index2;
    int count = 0; 
    int res[N];
    bool duplicate;
    printf("enter the string\n");
    for(index = 0 ; index < N ; index++)
    {
        scanf("%d" , &arr[index]);
    }
    
    for(index = 0 ; index < N ; index++)
    {
        duplicate = false;
        for(index2 = 0 ; index2 < count ; index2++)
        {
            if(arr[index] == res[index2])
            {
            duplicate = true;
            break;
            }
        }
        if(duplicate == false)
        {
            res[count] = arr[index];
            count++;
        }
    }
    printf("enter the string\n");
    for(index = 0 ; index < N ; index++)
    {
        printf("%d " , res[index]);
    }
    return 0;
}
