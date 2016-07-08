#include <cs50.h>
#include <stdio.h>

int main(void){
    
     int i = 0, j = 0, k = 0;
     int h = -1;
     while(h < 0 || h > 23){
         printf("Height: ");
         h = GetInt();
     }
     for(i = 0; i< h; i++){
         for(j=0; j< h-i-1; j++)
            printf(" ");
        for(k=0; k<1+i; k++)            
            printf("#");
        printf("  ");    
        for(k=0; k<1+i; k++)            
            printf("#");    
        printf("\n");
     }
}    
    