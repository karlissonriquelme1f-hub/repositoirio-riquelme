#include <stdio.h>

int main() {
    double preco_unitario, valor_pago, total;
    int quantidade;
    printf("Preco unitario do produto: ");
    scanf("%lf", &preco_unitario);
    printf("Quantidade comprada (unidades): ");
    scanf("%d", &quantidade);
    printf("Valor em dinheiro dado pelo cliente: ");
    scanf("%lf", &valor_pago);

    total = preco_unitario * quantidade;
    double troco = valor_pago - total;

    printf("\nVALOR A PAGAR = R$ %.2f\n", total);
    printf("TROCO = R$ %.2f\n", troco);   // duas casas decimais
    return 0;
}