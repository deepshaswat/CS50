#include <cs50.h>
#include <stdio.h>

int main(void){

    int count = 0;
    int vInt = 0;
    float val = 0;
    float vFloat = 0;
    printf("O hai! How much change is owed?\n");
    val = GetFloat();
    while(val <= 0){
        printf("How much change is owed?\n");
        val = GetFloat();
    }
    vInt = (int)val;
    vFloat = (val - vInt);
    if(vInt > 0)
        count = vInt * 4;
    while(vFloat >= 0){
        if(vFloat >= 0.25){
            count += 1;
            vFloat -= 0.25;
        }
        else if(vFloat < 0.25 && vFloat > 0.09){
            count += 1;
            vFloat -= 0.10;
        }
        else if(vFloat < 0.10 && vFloat >= 0.05){
            count += 1;
            vFloat -= 0.05;
        }else if(vFloat < 0.05 && vFloat > 0.009){
            count += 1;
            vFloat -= 0.01;
        }else
        break;
    }
    printf("%d\n", count);
}