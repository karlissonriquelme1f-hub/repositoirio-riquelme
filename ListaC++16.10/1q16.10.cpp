#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double n1, n2;
    cout << "Digite a nota do 1o. semestre e do 2o. semestre: ";
    cin >> n1 >> n2;
    double media = (n1 + n2) / 2.0;
    cout << fixed << setprecision(1);
    cout << "Nota final: " << media << endl;
    if (media < 60.0) {
        cout << "REPROVADO" << endl;
    }
    return 0;
}