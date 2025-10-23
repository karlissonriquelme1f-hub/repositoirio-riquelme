#include <iostream>
using namespace std;

int main() {
    int m[3][2];
    cout << "Digite os elementos da matriz 3x2 (3 linhas e 2 colunas):\n";
    for (int i=0;i<3;i++)
        for (int j=0;j<2;j++)
            cin >> m[i][j];

    int t[2][3];
    for (int i=0;i<3;i++)
        for (int j=0;j<2;j++)
            t[j][i] = m[i][j];

    cout << "Matriz original 3x2:\n";
    for (int i=0;i<3;i++){
        for (int j=0;j<2;j++) cout << m[i][j] << " ";
        cout << "\n";
    }

    cout << "Matriz transposta 2x3:\n";
    for (int i=0;i<2;i++){
        for (int j=0;j<3;j++) cout << t[i][j] << " ";
        cout << "\n";
    }
    return 0;
}
