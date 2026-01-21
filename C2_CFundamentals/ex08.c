//ex08.c
//Importante referir que os valores n estão a dar o mesmo que o exemplo pois
//Acredito que haja algo com os floats e arredondamentos

#include <stdio.h>

int main(void){

    float loan=20000.00, interest=6.0, monthlyPay=386.66, balance, monthlyInterest;

    monthlyInterest = (interest * 0.01) / 12;

    balance = loan - monthlyPay;
    float temp = balance * monthlyInterest;
    balance += temp;
    printf("Balance remaining after first payment: $%.2f\n", balance);

    balance -= monthlyPay;
    temp = balance * monthlyInterest;
    balance += temp;
    printf("Balance remaining after second payment: $%.2f\n", balance);

    balance -= monthlyPay;
    temp = balance * monthlyInterest;
    balance += temp;
    printf("Balance remaining after third payment: $%.2f\n", balance);

    return 0;
}