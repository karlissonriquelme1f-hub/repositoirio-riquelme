#include <stdio.h>

int main() {
    int codigo;
    printf("Digite o codigo do vinho: ");
    scanf("%d", &codigo);

    if (codigo >= 1 && codigo <= 3) printf("De mesa\n");
    else if (codigo == 4) printf("Tinto\n");
    else if (codigo == 5) printf("Branco seco\n");
    else if (codigo == 6 || codigo == 7) printf("Branco doce\n");
    else if (codigo == 8) printf("Rose\n");
    else if (codigo == 9) printf("Espumante\n");
    else if (codigo >= 10) printf("Fortificado\n");
    else printf("Codigo invalido!\n");

    return 0;
}
