#include <stdio.h>

int main() {
    int nota;
    printf("Digite a nota (1 a 5): ");
    scanf("%d", &nota);

    switch(nota) {
        case 1: printf("Pessimo\n"); break;
        case 2: printf("Ruim\n"); break;
        case 3: printf("Bom\n"); break;
        case 4: printf("Muito bom\n"); break;
        case 5: printf("Excelente\n"); break;
        default: printf("Nota invalida!\n");
    }
    return 0;
}
