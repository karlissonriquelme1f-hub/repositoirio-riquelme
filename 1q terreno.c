#include <stdio.h>

int main() {
    double largura, comprimento, valor_m2, area, valor_area, valor_total;
    printf("Largura (uma casa decimal): ");
    scanf("%lf", &largura);            // entrada com 1 casa decimal (usuário)
    printf("Comprimento (uma casa decimal): ");
    scanf("%lf", &comprimento);
    printf("Valor do metro quadrado (duas casas decimais): ");
    scanf("%lf", &valor_m2);

    area = largura * comprimento;
    valor_area = area;
    valor_total = area * valor_m2;

    printf("\nAREA DO TERRENO = %.2f m2\n", area);           // duas casas decimais
    printf("VALOR DO TERRENO (por m2 = %.2f) = R$ %.2f\n", valor_m2, valor_total);
    return 0;
}