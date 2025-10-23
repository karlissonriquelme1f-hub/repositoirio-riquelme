#include <iostream>
#include <vector>
#include <limits>
using namespace std;

int main() {
    vector<int> v(15);
    cout << "Digite 15 numeros inteiros:\n";
    for (int i = 0; i < 15; ++i) cin >> v[i];

    int maior = numeric_limits<int>::min();
    int menor = numeric_limits<int>::max();
    for (int x : v) {
        if (x > maior) maior = x;
        if (x < menor)  menor = x;
    }

    cout << "Maior: " << maior << "\nMenor: " << menor << endl;
    return 0;
}