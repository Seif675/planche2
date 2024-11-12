#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void dessinerCone(int hauteurCone, int nbBoules) {
    int boulesPlacees = 0;
    srand(time(0));

    for (int i = 0; i < hauteurCone; i++) {
        for (int j = 0; j < hauteurCone - i - 1; j++) cout << " ";

        for (int j = 0; j < 2 * i + 1; j++) {
            if (boulesPlacees < nbBoules && ((double)rand() / RAND_MAX) < 0.5) {
                cout << "O";
                boulesPlacees++;
            } else {
                cout << "*";
            }
        }
        cout << endl;
    }
}

void dessinerTronc(int hauteurTronc, int largeurTronc) {
    for (int i = 0; i < hauteurTronc; i++) {
        for (int j = 0; j < largeurTronc / 2; j++) cout << " ";
        for (int j = 0; j < largeurTronc; j++) cout << "|";
        cout << endl;
    }
}

int main() {
    int hauteurCone, hauteurTronc, largeurTronc, nbBoules;

    cout << "Entrez la hauteur du cône: ";
    cin >> hauteurCone;
    cout << "Entrez la hauteur du tronc: ";
    cin >> hauteurTronc;
    cout << "Entrez la largeur du tronc: ";
    cin >> largeurTronc;
    cout << "Entrez le nombre de boules: ";
    cin >> nbBoules;

    dessinerCone(hauteurCone, nbBoules);
    dessinerTronc(hauteurTronc, largeurTronc);

    return 0;
}
