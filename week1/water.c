#include <cs50.h>
#include <stdio.h>

int main(void){
    printf("minutes: ");
    int min = GetInt();
    int bottles = min * 12;
    printf("\nbottles: %d", bottles);
}