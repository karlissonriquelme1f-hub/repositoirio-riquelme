#include <iostream>
using namespace std;

int main() {
    long long n;
    cout << "Digite um numero inteiro nao-negativo: ";
    cin >> n;
    if (n < 0) {
        cout << "Fatorial indefinido para numeros negativos.\n";
        return 0;
    }
    // Usamos long long; para n grande pode estourar.
    long long fat = 1;
    for (long long i = 2; i <= n; ++i) fat *= i;
    cout << n << "! = " << fat << endl;
    return 0;
}