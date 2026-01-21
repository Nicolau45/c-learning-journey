/* Computes the dimensional weight of a box from input provided by the user */

#include <stdio.h>

int main(void){

    int altura, largura, comprimento, volume, peso;

    printf("Indica a [altura largura comprimento]\n");
    scanf("%d %d %d", &altura, &largura, &comprimento);

    volume = altura * largura * comprimento;

    peso = (volume + 165) / 166;

    printf("Altura: %d\tLargura: %d\tComprimento: %d\n", altura, largura, comprimento);
    printf("Volume: %d\n", volume);
    printf("Peso em pounds: %d\n", peso);

    return 0;
}