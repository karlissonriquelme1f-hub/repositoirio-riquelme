#include <iostream>
using namespace std;

int main() {
    int m[4][4];
    cout << "Digite 16 elementos da matriz 4x4:\n";
    for (int i=0;i<4;i++) for (int j=0;j<4;j++) cin >> m[i][j];

    int alvo;
    cout << "Digite o numero a ser contado: ";
    cin >> alvo;

    int cont = 0;
    for (int i=0;i<4;i++)
        for (int j=0;j<4;j++)
            if (m[i][j] == alvo) ++cont;

    cout << "O numero " << alvo << " aparece " << cont << " vezes na matriz.\n";
    return 0;
}
