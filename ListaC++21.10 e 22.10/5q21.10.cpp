#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v(10);
    cout << "Digite 10 numeros inteiros:\n";
    for (int i = 0; i < 10; ++i) cin >> v[i];

    int alvo;
    cout << "Digite o numero a ser procurado: ";
    cin >> alvo;

    bool encontrado = false;
    for (int i = 0; i < 10; ++i) {
        if (v[i] == alvo) {
            cout << "Numero encontrado na posicao (indice) " << i << endl;
            encontrado = true;
            break;
        }
    }
    if (!encontrado) cout << "Numero nao encontrado no vetor.\n";
    return 0;
}