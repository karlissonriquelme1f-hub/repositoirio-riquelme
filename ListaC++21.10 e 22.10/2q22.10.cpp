#include <iostream>
#include <limits>
using namespace std;

int main() {
    int m[4][4];
    cout << "Digite 16 inteiros para a matriz 4x4:\n";
    for (int i=0;i<4;i++)
        for (int j=0;j<4;j++)
            cin >> m[i][j];

    int maior = numeric_limits<int>::min();
    for (int i=0;i<4;i++)
        for (int j=0;j<4;j++)
            if (m[i][j] > maior) maior = m[i][j];

    cout << "Maior elemento da matriz: " << maior << endl;
    return 0;
}
