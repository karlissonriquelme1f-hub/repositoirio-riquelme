#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int minutos;
    const double plano = 50.0;
    const int franquia = 100;
    const double custo_extra = 2.0;
    cout << "Digite a quantidade de minutos consumidos: ";
    cin >> minutos;
    double valor = plano;
    if (minutos > franquia) {
        valor += (minutos - franquia) * custo_extra;
    }
    cout << fixed << setprecision(2);
    cout << "Valor a pagar: R$ " << valor << endl;
    return 0;
}