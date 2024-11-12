#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    cout << "Nombres entiers al�atoires entre 1 et 10 :" << endl;
    for (int i = 0; i < 5; i++) {
        cout << 1 + rand() % 10 << endl;
    }

    cout << "\nNombres r�els al�atoires entre 0 et 1 :" << endl;
    for (int i = 0; i < 5; i++) {
        cout << static_cast<double>(rand()) / RAND_MAX << endl;
    }

    return 0;
}
