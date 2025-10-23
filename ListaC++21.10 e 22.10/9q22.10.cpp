#include <iostream>
using namespace std;

int main() {
    int m[3][3];
    cout << "Digite os 9 elementos da matriz 3x3:\n";
    for (int i=0;i<3;i++) for (int j=0;j<3;j++) cin >> m[i][j];

    // Inverter a ordem dos elementos de cada linha (reverse das linhas)
    for (int i=0;i<3;i++) {
        for (int j=0, k=2; j<k; j++, k--) {
            int tmp = m[i][j];
            m[i][j] = m[i][k];
            m[i][k] = tmp;
        }
    }

    cout << "Matriz modificada (cada linha invertida):\n";
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++) cout << m[i][j] << " ";
        cout << "\n";
    }
    return 0;
}
