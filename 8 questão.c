#include <stdio.h>

int main() {
    int matriz[4][4], i, j, num, cont=0;

    printf("Digite os valores da matriz 4x4:\n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            scanf("%d",&matriz[i][j]);
        }
    }

    printf("Digite o numero que deseja contar: ");
    scanf("%d",&num);

    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(matriz[i][j] == num){
                cont++;
            }
        }
    }

    printf("O numero %d aparece %d vezes.\n", num, cont);

    return 0;
}
