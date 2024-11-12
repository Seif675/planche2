#include <iostream>

using namespace std;

double addition(double a, double b) {
    return a + b;
}

double multiplication(double a, double b) {
    return a * b;
}

double soustraction(double a, double b) {
    return a - b;
}

double division(double a, double b) {
    if (b == 0) {
        cout << "Erreur: division par 0" << endl;
        return 0;
    }
    return a / b;
}

int main() {
    int choix;
    double a, b, resultat;

    do {
        system("cls");
        cout << "** CALCULATRICE *****" << endl;
        cout << "* 1. Addition" << endl;
        cout << "* 2. Multiplication" << endl;
        cout << "* 3. Soustraction" << endl;
        cout << "* 4. Division" << endl;
        cout << "* 5. Quitter" << endl;
        cout << "Operation? ";
        cin >> choix;
        switch (choix) {
            case 1:
                cout << "Entrez deux nombres: ";
                cin >> a >> b;
                resultat = addition(a, b);
                cout << "Resultat: " << resultat << endl;
                break;
            case 2:
                cout << "Entrez deux nombres: ";
                cin >> a >> b;
                resultat = multiplication(a, b);
                cout << "Resultat: " << resultat << endl;
                break;
            case 3:
                cout << "Entrez deux nombres: ";
                cin >> a >> b;
                resultat = soustraction(a, b);
                cout << "Resultat: " << resultat << endl;
                break;
            case 4:
                cout << "Entrez deux nombres: ";
                cin >> a >> b;
                resultat = division(a, b);
                cout << "Resultat: " << resultat << endl;
                break;
            case 5:
                cout << "Au revoir!" << endl;
                break;
            default:
                cout << "Choix invalide. Veuillez réessayer." << endl;
        }

        if (choix != 5) {
            cout << "Appuyez sur Entrée pour continuer...";
            cin.ignore();
            cin.get();
        }

    } while (choix != 5);

    return 0;
}
