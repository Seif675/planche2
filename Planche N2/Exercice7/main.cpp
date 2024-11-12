#include <iostream>
using namespace std;

int u(int n) {
    if (n == 0) return 3;
    return 3 * u(n - 1) + 4;
}

int main() {
    int N;
    cout << "Entrez un entier N : ";
    cin >> N;

    cout << "u(" << N << ") = " << u(N) << endl;
    return 0;
}
