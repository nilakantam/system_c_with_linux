#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define N 1000
void remove_even_indices(char *str , int len);
int main()
{
    char str[N];
    
    printf("Enter the string:\n");
    fgets(str , N-1 , stdin);
    if(str[strlen(str) - 1] == '\n')
        str[strlen(str) - 1] = '\0';
    int len = strlen(str);
    remove_even_indices(str , len);
    printf("The even indexed string\n");
    puts(str);
    
    return 0;
}

void remove_even_indices(char *str , int len){
    int index;
    int j = 0;
    
    for(index = 0 ; index < len ; index++)
    {
        if(index%2 == 0){
            str[j++] = str[index];
        }
    }
    str[j] = '\0';
}
