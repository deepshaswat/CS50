#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){

    string s = GetString();
    for(int i = 0; i < strlen(s)-1; i++){
        if(i == 0 && s[i] != ' ')
            printf("%c", toupper(s[i]));
        else if(s[i] == ' ' && s[i+1] != ' ')
            printf("%c", toupper(s[++i]));
        else if(s[i] == ' ')
            continue;
    }
    printf("\n");

    return 0;
}