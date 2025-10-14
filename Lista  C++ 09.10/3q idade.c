#include <stdio.h>

int main() {
    char nome1[100], nome2[100];
    int idade1, idade2;
    double media;

    printf("Nome da primeira pessoa: ");
    scanf("%s", nome1);      // se quiser nomes com espaços, usar fgets em vez de scanf
    printf("Idade da primeira pessoa: ");
    scanf("%d", &idade1);

    printf("Nome da segunda pessoa: ");
    scanf("%s", nome2);
    printf("Idade da segunda pessoa: ");
    scanf("%d", &idade2);

    media = (idade1 + idade2) / 2.0;

    printf("\n%s e %s\n", nome1, nome2);
    printf("Idade media = %.1f\n", media);   // uma casa decimal
    return 0;
}