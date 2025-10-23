#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v(10);
    cout << "Digite 10 numeros inteiros:\n";
    for (int i = 0; i < 10; ++i) cin >> v[i];

    int soma = 0;
    for (int x : v) soma += x;

    cout << "Soma dos elementos: " << soma << endl;
    return 0;
}