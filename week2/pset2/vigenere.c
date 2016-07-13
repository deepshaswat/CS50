#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void caesar_shift(char *s, char *ch);

int main(int argc, char **argv){
    
    if(argc != 2 ){
        printf("Please enter an integer\n");
        return 1;
    }
    for(int i = 0, n = strlen(argv[1]); i < n; i++){
        if(!isalpha(argv[1][i])){
            printf("Please enter an integer\n");
            return 1;
        }
    }
    
    string s = GetString();
    string k = argv[1];
    char ch[strlen(s)];
    
    for(int i = 0, j = 0, n = strlen(s), m = strlen(k); i < n; i++){
        if(isalpha(s[i]))
            ch[i] = k[j++];
        else
            ch[i] = s[i];
        
        if(j > m-1)
            j = 0;
    }
    caesar_shift(s,ch); 
    return 0;
}

void caesar_shift(char *s, char *ch){
    
    for(int i = 0, n = strlen(ch); i < n; i++){
        int k = (int)ch[i]; 
        if(isupper(ch[i]))
            k -= 65;
        else
            k -=97;
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
    
}