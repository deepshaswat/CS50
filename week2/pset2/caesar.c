#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char **argv){

    if(argc < 2){
        printf("Please enter an integer\n");
        return 1;
    }
    string s = GetString();
    int k = atoi(argv[1]);
    
    if(k > 26)
        k = k % 26;
    
    for(int i = 0, n = strlen(s); i < n; i++){
        if(isalpha(s[i]) && isupper(s[i])){
            int c = ((int)s[i] + k);
            if(c > 90)
                c -= 26;
            printf("%c", (char)c);
        } 
        else if(isalpha(s[i]) && islower(s[i])){
            int c = ((int)s[i] + k);
            if(c > 122)
                c -= 26;
            printf("%c", (char)c);
        } 
        else{
            printf("%c", s[i]);
        }
    }
    printf("\n");
    
    return 0;   
}