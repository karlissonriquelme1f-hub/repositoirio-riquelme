#include <iostream>
using namespace std;

int main() {
    double glicose;
    cout << "Digite a quantidade de glicose (mg/dl): ";
    cin >> glicose;
    if (glicose <= 100.0) {
        cout << "Classificacao: Normal (Ate 100 mg/dl)" << endl;
    } else if (glicose <= 140.0) {
        cout << "Classificacao: Elevado (Maior que 100 ate 140 mg/dl)" << endl;
    } else {
        cout << "Classificacao: Diabetes (Maior de 140 mg/dl)" << endl;
    }
    return 0;
}