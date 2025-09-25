#include <stdio.h>

int main() {
    int codigo, tipo, dias;

    printf("Digite o codigo do livro: ");
    scanf("%d", &codigo);
    printf("Digite o tipo de usuario (1-professor, 2-aluno): ");
    scanf("%d", &tipo);

    dias = (tipo == 1) ? 7 : 3;

    printf("Recibo:\nLivro: %d\nUsuario: %s\nDias: %d\n",
           codigo, (tipo == 1 ? "Professor" : "Aluno"), dias);

    return 0;
}
