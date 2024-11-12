#include <iostream>

using namespace std;
void incrementer(int& a){
    a++;
}
void permuter (int&a,int &b){
    int temp = a;
    a=b;
    b=temp;
}
int main()
{
    int x=5;
    int y=10;
    cout << "avant incrementation : x = " <<x<<endl;
    incrementer(x);
    cout <<"apres incrementation : x= " <<x<<endl;
    cout <<"avant permutation : x= " <<x<<",y =" <<y<<endl;
    permuter(x,y);
    cout <<"apres permutation : x = " <<x<<",y =" <<y<<endl;
    return 0;
}
