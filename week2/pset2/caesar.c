#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char **argv){

    # to check exactly one argument is passed.
    if(argc != 2){
        printf("Please enter an integer and one argument\n");
        return 1;
    }
    string s = GetString();
    #to convert the string to an integer passed as the argument.
    int k = atoi(argv[1]);

    #to encryption can only be done for the value of k from 0 -26.
    if(k > 26)
        k = k % 26;

    #encrypting and printing directly in the console
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
