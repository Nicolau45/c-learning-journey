// ex05.c C3

#include <stdio.h>
#include <string.h>

int main(void){
    
    int var[4][4];
    char rowSum[50], colSum[50], diagSum[50];
    char buffer[10], buff[10], bu[10];
    int sumDig=0;

    printf("Enter the numbers form 1 to 16 in any order: \n");
    for(int i = 0; i<4; i++){
        for (int j = 0; j < 4; j++){
            scanf("%d", &var[i][j]);
            printf("%d ", var[i][j]);
        }        
        printf("\n");
    }

    for(int i = 0; i<4; i++){
        int sumRow=0, sumCol=0;
        for (int j = 0; j < 4; j++){
            sumRow+=var[i][j];
            sumCol+=var[j][i];
            if(i==j){
                sumDig+=var[i][j];
            }
            printf("%d ", var[i][j]);
        }        
        printf("\n");
        sprintf(buffer, "%d ", sumRow);
        strcat(rowSum, buffer);
        sprintf(buff, "%d ", sumCol);
        strcat(colSum, buff);        
    }
    sprintf(bu, "%d ", sumDig);
    strcat(diagSum, bu);

    printf("\nRow sums: %s", rowSum);
    printf("\nColumn sums: %s", colSum);
    printf("\nDiagoanl sums: %s", diagSum);       
    
    return 0;
}

// n estou a cnseguir fazer a outra soma da diagonal mas acredito que está tudo o