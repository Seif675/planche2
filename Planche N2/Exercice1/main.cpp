#include <iostream>

using namespace std;

int main()
{
    //Allocation statique pour un entier:
    int entier=42;
    cout << "valeur de l'entier  : " << entier <<endl;
    cout << "adresse de l'entier : " <<&entier <<endl;
    //Allocation dynamique pour un entier:
    int *p_int =new int;
    *p_int = 24;
    cout << "valeur de l'entier : " <<*p_int <<endl;
    cout << "adresse de l'entier : " <<p_int <<endl;
    delete p_int;
    //Allocation statique pour un reel:
    float reel=3.14f;
    cout << "valeur de reel :" <<reel <<endl;
    cout << "adresse de reel :" <<&reel <<endl;
    //Allocation dynamique pour un reel;
    float*p_float = new float;
    *p_float=3.14f;
    cout <<"valeur de reel :" <<*p_float << endl;
    cout <<"adresse de reel : " <<p_float << endl;
    delete p_float;
    return 0;
}
