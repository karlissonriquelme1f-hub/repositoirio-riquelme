#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

int main() {
    char escala;
    double temp;
    cout << "Digite a escala (C ou F) seguida da temperatura: ";
    cin >> escala >> temp;
    escala = toupper(escala);
    cout << fixed << setprecision(2);
    if (escala == 'C') {
        double f = temp * 9.0 / 5.0 + 32.0;
        cout << temp << " C = " << f << " F" << endl;
    } else if (escala == 'F') {
        double c = 5.0 * (temp - 32.0) / 9.0;
        cout << temp << " F = " << c << " C" << endl;
    } else {
        cout << "Escala invalida. Use 'C' ou 'F'." << endl;
    }
    return 0;
}