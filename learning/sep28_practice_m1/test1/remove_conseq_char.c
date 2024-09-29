#include<stdio.h>
#include<string.h>
#define N 1000
void remove_consq(char *str , int len);
int main()
{
    char str[N];
    printf("Enter the string:\n");
    fgets(str , N-1 , stdin);
    if(str[strlen(str) - 1] = '\n')
        str[strlen(str) - 1] = '\0';
        
    remove_consq(str , strlen(str));
    puts(str);
    return 0;
}

void remove_consq(char *str , int len)
{
    int i ;
    int j=0;
    
    for(i = 0 ; i < len ; i++){
        if(j>0 && str[i] == str[j-1] )
        {
            j--;
        }
        else
        {
            str[j] = str[i];
            j++;
        }
    }
    str[j] = '\0';
}
