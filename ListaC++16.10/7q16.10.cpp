#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
    vector<double> tentativas(3);
    cout << "Digite as tres medidas (em metros) das tentativas: ";
    cin >> tentativas[0] >> tentativas[1] >> tentativas[2];

    double maior = tentativas[0];
    for (int i = 1; i < 3; ++i) if (tentativas[i] > maior) maior = tentativas[i];

    // Verifica se houve empate entre maxima(s)
    int cont = 0;
    for (int i = 0; i < 3; ++i) if (fabs(tentativas[i] - maior) < 1e-9) ++cont;

    cout << fixed << setprecision(2);
    if (cont == 1) {
        int idx = 0;
        for (int i = 0; i < 3; ++i) if (tentativas[i] == maior) { idx = i + 1; break; }
        cout << "Maior distancia: tentativa " << idx << " = " << maior << " metros" << endl;
    } else {
        cout << "Houve empate. As maiores distancias = " << maior << " metros (ocorreram " << cont << " vezes)" << endl;
    }
    return 0;
}