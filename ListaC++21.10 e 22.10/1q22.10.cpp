#include <iostream>
using namespace std;

int main() {
    int m[3][3];
    cout << "Digite os elementos da matriz 3x3 (linha por linha):\n";
    for (int i=0;i<3;i++)
        for (int j=0;j<3;j++)
            cin >> m[i][j];

    int soma = 0;
    for (int i=0;i<3;i++)
        for (int j=0;j<3;j++)
            soma += m[i][j];

    cout << "Soma de todos os elementos: " << soma << endl;
    return 0;
}
