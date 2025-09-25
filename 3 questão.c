#include <stdio.h>

int main() {
    int destino, idaVolta;
    float valor;

    printf("1-Morros (120)\n2-Barreirinhas (200)\n3-Bacabeira (50)\n4-Rosario (80)\n");
    printf("Digite o destino: ");
    scanf("%d", &destino);

    switch(destino) {
        case 1: valor = 120; break;
        case 2: valor = 200; break;
        case 3: valor = 50;  break;
        case 4: valor = 80;  break;
        default: printf("Destino invalido!\n"); return 0;
    }

    printf("Compra de ida e volta? (1-Sim, 0-Nao): ");
    scanf("%d", &idaVolta);

    if (idaVolta == 1) {
        valor = valor * 2 * 0.9; // ida e volta com desconto
    } else {
        valor = valor * 1;
    }

    printf("Valor a pagar: R$ %.2f\n", valor);
    return 0;
}
