#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double preco, valorPago;
    int quantidade;
    cout << "Digite preco unitario, quantidade e valor dado pelo cliente: ";
    cin >> preco >> quantidade >> valorPago;
    double total = preco * quantidade;
    cout << fixed << setprecision(2);
    if (valorPago >= total) {
        double troco = valorPago - total;
        cout << "Total a pagar: R$ " << total << endl;
        cout << "Troco: R$ " << troco << endl;
    } else {
        double faltam = total - valorPago;
        cout << "Dinheiro insuficiente. Faltam R$ " << faltam << endl;
    }
    return 0;
}