#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Digite dois numeros inteiros (em qualquer ordem): ";
    cin >> a >> b;
    if (a == 0 || b == 0) {
        if (a == 0 && b == 0) {
            cout << "Ambos zero: 0 eh multiplo de 0 (caso especial)." << endl;
        } else if (a == 0) {
            cout << "0 eh multiplo de " << b << " (0 = 0 * " << 0 << ")." << endl;
        } else {
            cout << "0 eh multiplo de " << a << " (0 = 0 * " << 0 << ")." << endl;
        }
    } else {
        if (a % b == 0) {
            cout << a << " eh multiplo de " << b << "." << endl;
        } else if (b % a == 0) {
            cout << b << " eh multiplo de " << a << "." << endl;
        } else {
            cout << "Nenhum eh multiplo do outro." << endl;
        }
    }
    return 0;
}