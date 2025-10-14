#include <stdio.h>

int main() {
    double distancia, combustivel, consumoMedio;

    printf("Distancia percorrida (km): ");
    scanf("%lf", &distancia);

    printf("Combustivel gasto (litros): ");
    scanf("%lf", &combustivel);

    consumoMedio = distancia / combustivel;

    printf("Consumo medio = %.3lf km/l\n", consumoMedio);

    return 0;
}