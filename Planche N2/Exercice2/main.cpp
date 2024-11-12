#include <iostream>

using namespace std;
//passage par valeur:
bool egaliteParValeur(int a, int b){
    return a==b;
}
//passage par adresse:
bool egaliteParAdresse(int *a,int *b){
    return *a==*b;
}
//passage par reference:
bool egaliteParReference(int &a,int &b){
    return a==b;
}
int main()
{
    int x=10;
    int y=10;
    int z=20;
    //par valeur
    cout <<"test par valeur :" << (egaliteParValeur(x,y) ? "egal" : "pas egal")<<endl;
    cout <<"test par valeur :" << (egaliteParValeur(x,z) ? "egal" : "pas egal")<<endl;
    //par adresse
    cout <<"test par adresse :" << (egaliteParAdresse(&x,&y) ? "egal" : "pas egal")<<endl;
    cout <<"test par adresse :" << (egaliteParAdresse(&x,&z) ? "egal" : "pas egal")<<endl;
    //par reference
    cout <<"test par reference :" << (egaliteParReference(x,y) ? "egal" : "pas egal")<<endl;
    cout <<"test par reference :" << (egaliteParReference(x,z) ? "egal" : "pas egal")<<endl;
    return 0;
}
