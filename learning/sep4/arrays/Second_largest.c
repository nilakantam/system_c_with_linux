#include<stdio.h>
#include<stdlib.h>
#define N 10
int find_largest(int arr[]);
int main(){
    int arr[N];
    for(int i = 0 ; i < N ; i++){
        scanf("%d", &arr[i]);
    }
    
    int max2 = find_largest(arr);
    
    printf("%d", max2);
    return 0;
}

int find_largest(int arr[]){
    int max1 = arr[0];
    int max2 = 0;
    for(int i = 0 ; i < N ; i++){
        if(arr[i] > max1){
            max2 = max1;
            max1 = arr[i];
        } else if(arr[i] > max2 && arr[i] != max1){
            max2 = arr[i];
        }
    }
    return max2;
}
