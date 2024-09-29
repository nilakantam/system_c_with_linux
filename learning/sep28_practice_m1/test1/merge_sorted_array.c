#include<stdio.h>
#include<stdlib.h>
int *merge_arrays(int *arr1 ,int *arr2 , int len1 , int len2 , int len3);
int remove_even(int *mer ,int len3 , int *odd);
void sort(int *odd , int len_o);
int main()
{
    int len1;
    int len2;
    int len3;
    int index;
    printf("Enter the length of array1\n");
    scanf("%d" , &len1);
    int arr1[len1];
    printf("Enter the array1\n");
    for(index = 0 ; index < len1 ; index++)
        scanf("%d" , &arr1[index]);
    
    printf("Enter the length of array1\n");
    scanf("%d" , &len2);
    getchar();
    int arr2[len2];
    printf("Enter the array2\n");
    for(index = 0 ; index < len2 ; index++)
        scanf("%d" , &arr2[index]);
    //merge array    
    len3 = len1 +len2;
    int *mer = merge_arrays(arr1 , arr2 , len1 , len2 , len3);
    printf("The merged array is:\n");
    for(index = 0 ; index < len3 ; index++)
        printf("%d " , mer[index]);
    printf("\n");
    
    //even numbers removing
    int odd[len3];
    int len_o = remove_even(mer , len3 , odd);
    printf("The odd number array:\n");
    for(index = 0 ; index < len_o ; index++)
        printf("%d " , odd[index]);
        
    //sorted array
    sort(odd , len_o);
    printf("\nsorted array:\n");
    for(index = 0 ; index < len_o ; index++)
        printf("%d " , odd[index]);
    return 0;
}

int *merge_arrays(int *arr1 ,int *arr2 , int len1 , int len2 , int len3)
{
    int index;
    int *mer = (int *) malloc(len3 *sizeof(int));
    for(index = 0 ; index < len1 ; index++)
        mer[index] = arr1[index];
    
    for(index = 0 ; index < len2 ; index++)
        mer[index+len1] = arr2[index];
    return mer;
}

int remove_even(int *mer ,int len3 , int *odd)
{
    int len_o = 0;
    int index;
    for(index = 0 ; index < len3 ; index++)
    {
        if(mer[index]%2 != 0)
        {
            odd[len_o++] = mer[index];
        }
    }
    return len_o;
}

void sort(int *odd , int len_o){
    int index1;
    int index2;
    int tmp;
    
    for(index1 = 0 ; index1 < len_o ; index1++)
    {
        for(index2 = 0 ; index2 < len_o-index1-1 ; index2++)
        {
            if(odd[index2] > odd[index2+1])
            {
                tmp = odd[index2];
                odd[index2] = odd[index2+1];
                odd[index2+1] =tmp;
            }
        }
    }
}

