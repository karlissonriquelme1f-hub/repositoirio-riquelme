#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Quantos termos da sequencia de Fibonacci deseja (n>=1)? ";
    cin >> n;
    if (n <= 0) {
        cout << "Digite n >= 1\n";
        return 0;
    }
    vector<long long> fib(n);
    fib[0] = 0;
    if (n > 1) fib[1] = 1;
    for (int i = 2; i < n; ++i) fib[i] = fib[i-1] + fib[i-2];

    cout << "Sequencia Fibonacci: ";
    for (int i = 0; i < n; ++i) cout << fib[i] << (i+1==n? "\n": " ");
    return 0;
}
