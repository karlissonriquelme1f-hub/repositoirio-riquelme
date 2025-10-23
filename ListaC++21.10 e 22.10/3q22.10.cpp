#include <iostream>
using namespace std;

int main() {
    int m[5][5];
    cout << "Digite os 25 elementos da matriz 5x5 (linha por linha):\n";
    for (int i=0;i<5;i++)
        for (int j=0;j<5;j++)
            cin >> m[i][j];

    int linha;
    cout << "Qual linha deseja somar? (0 a 4): ";
    cin >> linha;
    if (linha < 0 || linha > 4) {
        cout << "Indice de linha invalido.\n";
        return 0;
    }

    int soma = 0;
    for (int j=0;j<5;j++) soma += m[linha][j];

    cout << "Soma da linha " << linha << ": " << soma << endl;
    return 0;
}
