#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int codigo, quantidade;
    cout << "Digite o codigo do produto e a quantidade: ";
    cin >> codigo >> quantidade;
    double preco = 0.0;
    bool valido = true;
    switch (codigo) {
        case 1: preco = 5.00; break;
        case 2: preco = 3.50; break;
        case 3: preco = 4.80; break;
        case 4: preco = 8.90; break;
        case 5: preco = 7.32; break;
        default: valido = false; break;
    }
    if (!valido) {
        cout << "Codigo invalido." << endl;
    } else {
        double total = preco * quantidade;
        cout << fixed << setprecision(2);
        cout << "Total a pagar: R$ " << total << endl;
    }
    return 0;
}