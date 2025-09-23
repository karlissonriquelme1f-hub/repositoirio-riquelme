#include <stdio.h>

int main() {
    int matriz[2][2], i, j;

    printf("Digite os valores da matriz 2x2:\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            scanf("%d",&matriz[i][j]);
        }
    }

    printf("\nMatriz completa:\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
