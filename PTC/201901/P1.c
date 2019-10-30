#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int char_checker(char c){
    if( 'a'<= c && c <= 'j' 
        || c == 'Z' || c == 'U' 
        || c == 'M' || c == 'T'
        || c == 'R' || c == '\n')
    {
        // cerrect;
        return 0;
    }
    else
    {   
        // wrong;
        return 1;
    }
}

int main(void){
    char str[257];
    int len;
    while (fgets(str, 257, stdin) != EOF)
    {
        len = strlen(str);
        for (int i = 0; i < len; i++)
        {
            if (char_checker(str[i]))
            {
                printf("NO\n");
                break;
            }else if(i == len-1){
                printf("YES\n");
            }else{
                // printf("error\n");
            }
            
        }
        
    }
    
    
        
}