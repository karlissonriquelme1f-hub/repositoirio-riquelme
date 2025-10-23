#include <iostream>
using namespace std;

int main() {
    int pares = 0, impares = 0;
    cout << "Digite 20 numeros inteiros:\n";
    for (int i = 0; i < 20; ++i) {
        int x; cin >> x;
        if (x % 2 == 0) ++pares;
        else ++impares;
    }
    cout << "Pares: " << pares << "\nImpares: " << impares << endl;
    return 0;
}