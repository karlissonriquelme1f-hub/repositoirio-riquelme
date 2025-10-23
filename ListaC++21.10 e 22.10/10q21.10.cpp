#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> u(5), v(5);
    cout << "Digite 5 elementos do primeiro vetor:\n";
    for (int i = 0; i < 5; ++i) cin >> u[i];
    cout << "Digite 5 elementos do segundo vetor:\n";
    for (int i = 0; i < 5; ++i) cin >> v[i];

    long long produtoEscalar = 0;
    for (int i = 0; i < 5; ++i) produtoEscalar += (long long)u[i] * v[i];

    cout << "Produto escalar: " << produtoEscalar << endl;
    return 0;
}
