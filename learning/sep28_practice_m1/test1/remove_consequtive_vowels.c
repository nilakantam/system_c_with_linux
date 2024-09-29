#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<ctype.h>

#define N 1000
int remove_cons_vowels(char *str , int len);
bool isvowel(int c);
int main()
{
    char str[N];
    int count;
    
    printf("Enter the strings:\n");
    fgets(str , N-1 , stdin);
    if(str[strlen(str) - 1] == '\n')
        str[strlen(str) - 1] = '\0';
        
    count = remove_cons_vowels(str , strlen(str));
    printf("%d\n" , count);
    puts(str);
    return 0;
}

int remove_cons_vowels(char *str , int len)
{
    int i;
    int j=0;
    int count = 0;
    
    for(i = 0 ; i < len-1 ; i++)
    {
        if(isvowel(str[i]) && isvowel(str[i+1]))
        {
            i++;
            count++;
        }
        else
        {
            str[j++] = str[i];
        }
    }
    str[j++] = str[len -1];
    str[j] = '\0';
    return count;
}

bool isvowel(int c)
{
    c = tolower(c);
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        return true;
    return false;
}
