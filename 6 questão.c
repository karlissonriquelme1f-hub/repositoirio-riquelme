#include <stdio.h>

int main() {
    int matriz[3][3], i, j;
    int somaPrincipal = 0, somaSecundaria = 0;

    printf("Digite os valores da matriz 3x3:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&matriz[i][j]);
        }
    }

    for(i=0;i<3;i++){
        somaPrincipal += matriz[i][i];           // diagonal principal
        somaSecundaria += matriz[i][2-i];        // diagonal secundaria
    }

    printf("Soma da diagonal principal = %d\n", somaPrincipal);
    printf("Soma da diagonal secundaria = %d\n", somaSecundaria);

    return 0;
}
