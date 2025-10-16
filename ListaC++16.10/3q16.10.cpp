#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Digite tres numeros inteiros: ";
    cin >> a >> b >> c;
    int menor = a;
    if (b < menor) menor = b;
    if (c < menor) menor = c;
    cout << "O menor valor lido eh: " << menor << endl;
    return 0;
}