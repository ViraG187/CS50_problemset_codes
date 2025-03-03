#include<stdio.h>
#include<string.h>
#include<ctype.h>

int validcard(char *cardno);

int main(void){
    char cardno[20];
    printf("Enter credit card no: ");
    scanf("%19s",&cardno);
    
    validcard(cardno);
}
int validcard(char *cardno){
    int sdigit = strlen(cardno);
    int flagfor2nd = 0;
    int sum =0;
    
    for(int i = sdigit-1; i >= 0; i--){
        int d = cardno[i] -'0';
        if(flagfor2nd){
            d = d*2;
            if(d>9){
                d -=9;
            }
        }
        sum +=d;
        flagfor2nd = !flagfor2nd;
        //printf("flagfor2nd value for %i is %i",cardno[i],flagfor2nd);
    }
    if (sum%10 == 0){
         return printf("Valid card");
    }else {return printf("Invalid card");
     } 
}
