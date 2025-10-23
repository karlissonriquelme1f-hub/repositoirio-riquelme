#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> a(5), b(5), c;
    cout << "Digite 5 elementos do primeiro vetor:\n";
    for (int i = 0; i < 5; ++i) cin >> a[i];
    cout << "Digite 5 elementos do segundo vetor:\n";
    for (int i = 0; i < 5; ++i) cin >> b[i];

    // intercalar: a0, b0, a1, b1, ...
    for (int i = 0; i < 5; ++i) {
        c.push_back(a[i]);
        c.push_back(b[i]);
    }

    cout << "Vetor intercalado (10 elementos): ";
    for (int x : c) cout << x << " ";
    cout << endl;
    return 0;
}
