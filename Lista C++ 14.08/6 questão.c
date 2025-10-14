#include <stdio.h>
#include <math.h>

int main() {
    // Problema 6 - circulo
    {
        double r, area;
        printf("Digite o valor do raio: ");
        scanf("%lf", &r);
        area = M_PI * r * r; // M_PI vem de math.h
        printf("AREA = %.3lf\n\n", area);
    }

return 0;
}