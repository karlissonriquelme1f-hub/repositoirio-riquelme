#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<double> v(8);
    cout << "Digite 8 numeros reais:\n";
    for (int i = 0; i < 8; ++i) cin >> v[i];

    double soma = 0.0;
    for (double x : v) soma += x;
    double media = soma / v.size();

    cout << "Media aritmetica: " << media << endl;
    return 0;
}