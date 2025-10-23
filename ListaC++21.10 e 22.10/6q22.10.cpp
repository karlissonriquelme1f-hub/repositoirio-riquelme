#include <iostream>
using namespace std;

int main() {
    int m[3][3];
    cout << "Digite os 9 elementos da matriz 3x3:\n";
    for (int i=0;i<3;i++) for (int j=0;j<3;j++) cin >> m[i][j];

    int somaPrincipal = 0, somaSecundaria = 0;
    for (int i=0;i<3;i++) {
        somaPrincipal += m[i][i];
        somaSecundaria += m[i][2 - i];
    }

    cout << "Soma da diagonal principal: " << somaPrincipal << endl;
    cout << "Soma da diagonal secundaria: " << somaSecundaria << endl;
    return 0;
}
