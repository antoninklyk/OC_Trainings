#include <iostream>

using namespace std;

void echange(double& a, double& b);

int main()
{
    double a = 2.2;
    double b = 3.3;

    echange(a,b);

    cout << "a=" << a << endl;
    cout << "b=" << b << endl;

    return 0;
}

void echange(double &a, double &b){

    double temporaire = a;
    a = b;
    b = temporaire;

}