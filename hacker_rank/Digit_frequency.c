#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define N 1000
int main() {

    char str[N];
    int index;
    int dup[10];
    int count;
    int index1;
   
    fgets(str , N-1 , stdin);
    if(str[strlen(str) - 1] == '\n')
        str[strlen(str) -1] = '\0';
    
    memset(dup , 0 , 10);
    
    for(index = 0 ; index < 10 ; index++)
    {
        count = 0;
        for(index1 = 0 ; index1 < strlen(str) ; index1++)
        {
            if(str[index1] == index+'0')
            {
                count++;
            }
        }   
        dup[index] = count;
    }
    
    for(index = 0 ; index < 10 ; index++)
        printf("%d " , dup[index]);
        
    return 0;
}
