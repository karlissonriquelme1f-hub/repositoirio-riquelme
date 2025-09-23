#include <stdio.h>

int main() {
    int matriz[3][3], i, j;

    printf("Digite os valores da matriz 3x3:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&matriz[i][j]);
        }
    }

    printf("\nMatriz com linhas invertidas:\n");
    for(i=0;i<3;i++){
        for(j=2;j>=0;j--){   // imprime ao contrario
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}