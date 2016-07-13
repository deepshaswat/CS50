#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){

    string s = GetString();
    for(int i = 0; i < strlen(s); i++){
        if(i == 0 )
            printf("%c", toupper(s[i]));
        else if(s[i] == ' ')
            printf("%c", toupper(s[++i]));
    }
    printf("\n");

    return 0;
}