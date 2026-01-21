// Ex07

#include <stdio.h>

int main (void){

    int amount, count;

    printf("US dollar amount: ");
    scanf("%d", &amount);

    count=amount/20;
    amount -= (count*20);
    printf("\n$20 bills: %d", count);

    count=amount/10;
    amount -= (count*10);
    printf("\n$10 bills: %d", count);

    count=amount/5;
    amount -= (count*5);    
    printf("\n$5 bills: %d", count);

    printf("\n$1 bills: %d\n", amount);
    
    return 0;
}
