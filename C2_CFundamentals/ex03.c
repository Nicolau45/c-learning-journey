/*Condense the dweight.c program by 
(1) replacing the assignments to height, length, and width with initializers and 
(2) removing the weight variable, instead calculating (volume +165) / 166 within the last printf.*/

#include <stdio.h>

int main(void){
    int altura=15, largura=20, comprimento=12, volume;

    volume = altura * largura * comprimento;

    printf("Altura: %d\tLargura: %d\tComprimento: %d\n", altura, largura, comprimento);
    printf("Volume: %d\n", volume);
    printf("Peso em pounds: %d\n", (volume + 165) / 166);

    return 0;
}