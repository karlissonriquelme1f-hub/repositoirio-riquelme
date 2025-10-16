#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double a, b, c;
    cout << "Digite os coeficientes a, b, c: ";
    cin >> a >> b >> c;
    if (a == 0.0) {
        cout << "Nao eh equacao do 2o grau (a == 0)." << endl;
        return 0;
    }
    double delta = b*b - 4*a*c;
    if (delta < 0.0) {
        cout << "A equacao nao possui raizes reais." << endl;
    } else {
        double r1 = (-b + sqrt(delta)) / (2*a);
        double r2 = (-b - sqrt(delta)) / (2*a);
        cout << fixed << setprecision(4);
        cout << "x1 = " << r1 << endl;
        cout << "x2 = " << r2 << endl;
    }
    return 0;
}