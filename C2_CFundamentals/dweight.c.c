/*Computes the dimensional weight of a 15" x 20" x 12" box*/

#include <stdio.h>

int main(void){

    int altura, largura, comprimento, volume, peso;

    altura = 15;
    largura = 20;
    comprimento = 12;

    volume = altura * largura * comprimento;

    peso = (volume + 165) / 166;

    printf("Altura: %d\tLargura: %d\tComprimento: %d\n", altura, largura, comprimento);
    printf("Volume: %d\n", volume);
    printf("Peso em pounds: %d\n", peso);

    return 0;
}