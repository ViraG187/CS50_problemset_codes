#include <stdio.h>

int paychange(int candy, int cashR);
int main(void) {
    
    int cashR;
    printf("Cash given by customer in cents: ");
    scanf(" %i", &cashR);
    
    int candy = 50;
    
    paychange(candy, cashR);
}
int paychange(int candy, int cashR){
    int coins[] = {25 , 10 , 5 , 1};
    int pay = cashR - candy;
    if ( pay >= 0 ){
        for (int i = 0; i < 4 ; i++){
            int change1 = pay/coins[i];
            pay = pay % coins[i];
            if ( change1 > 0 ){
                
            printf("Payback %i coins of %i cents \n ", change1,coins[i]);
            }
        }

    } else{ printf("give remaining extra money")
}
