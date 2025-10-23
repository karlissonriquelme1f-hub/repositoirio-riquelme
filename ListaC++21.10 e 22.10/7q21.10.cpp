#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v(10);
    cout << "Digite 10 numeros inteiros:\n";
    for (int i = 0; i < 10; ++i) cin >> v[i];

    vector<int> inv = v;
    reverse(inv.begin(), inv.end());

    cout << "Vetor original: ";
    for (int x : v) cout << x << " ";
    cout << "\nVetor invertido: ";
    for (int x : inv) cout << x << " ";
    cout << endl;
    return 0;
}