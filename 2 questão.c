#include <stdio.h>

int main() {
    float valor, total;
    int tipo;

    printf("Digite o valor da compra: ");
    scanf("%f", &valor);
    printf("Digite o tipo (1-visitante, 2-servidor, 3-aluno): ");
    scanf("%d", &tipo);

    switch(tipo) {
        case 1: total = valor; break;
        case 2: total = valor * 0.9; break;
        case 3: total = valor * 0.95; break;
        default: total = valor; printf("Codigo invalido!\n");
    }

    printf("Total a pagar: R$ %.2f\n", total);
    return 0;
}
