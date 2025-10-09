#include <stdio.h>
#include <math.h>

int main() {
    double base, altura, area, perimetro, diagonal;
    printf("Base do retangulo: ");
    scanf("%lf", &base);
    printf("Altura do retangulo: ");
    scanf("%lf", &altura);

    area = base * altura;
    perimetro = 2.0 * (base + altura);
    diagonal = sqrt(base * base + altura * altura);

    printf("\nAREA = %.4f\n", area);         // quatro casas decimais
    printf("PERIMETRO = %.4f\n", perimetro);
    printf("DIAGONAL = %.4f\n", diagonal);
    return 0;
}