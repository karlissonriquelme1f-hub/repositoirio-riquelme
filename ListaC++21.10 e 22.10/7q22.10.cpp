#include <iostream>
using namespace std;

int main() {
    int m[2][2];
    cout << "Insira os 4 valores da matriz 2x2:\n";
    for (int i=0;i<2;i++)
        for (int j=0;j<2;j++)
            cin >> m[i][j];

    cout << "Matriz 2x2 completa:\n";
    for (int i=0;i<2;i++){
        for (int j=0;j<2;j++) cout << m[i][j] << " ";
        cout << "\n";
    }
    return 0;
}
