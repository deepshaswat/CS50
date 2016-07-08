#include <cs50.h>
#include <stdio.h>

int validateCard(int num[], int n);
int sizeOfNum(long unsigned int num);

int main(){
    long num = 0;
    printf("Number: ");
    num =  GetLongLong();
    int i=0,n=sizeOfNum(num);
    int type[n];
    
    for(i = n-1; i>=0; i--){
        type[i] = num % 10;
        num /= 10;
    }
   
    if(type[0] == 4 && (n == 13 || n == 16)){
        if(validateCard(type, n)) 
            printf("VISA\n");
        else 
            printf("INVALID\n");
        
    }else if(type[0] == 3 && n == 15){
        if(type[1] == 4 || type[1] == 7){
            if(validateCard(type, n)) 
                printf("AMEX\n"); 
            else 
                printf("INVALID\n");
        }
    }else if(type[0] == 5 && n == 16){
         if(type[1] == 1 || type[1] == 2 || type[1] == 3 || type[1] == 4 || type[1] == 5){
            if(validateCard(type, n))
                printf("MASTERCARD\n"); 
            else 
                printf("INVALID\n");
        }
    }else 
        printf("INVALID\n");
    
   
}

int sizeOfNum(long unsigned int num){
    
    int res = 0;
    while(num!=0){
        num /= 10;
        res++;
    }
    return res;
}

int validateCard(int num[], int n){
   
   int i=0, sum=0, r = 1, temp = 0;
   
   for(i = n-2; i >= 0; i-=2){
       temp = num[i]*2;
       
       if(temp < 10){
           sum += temp;
       }else{
           
           sum += temp - 9;
       }
       
   }
  
   for(i = n-1; i >= 0; i-=2){
       sum += num[i];
       
    }
   
   r = sum % 10;
   if(r == 0)
        return 1;
    else
        return 0;
}