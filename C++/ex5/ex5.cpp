#include <iostream>

using namespace std;

double moyenne(double tab[], int length);

int main()
{
    double notes[6]={3,2,2,9,10,1};
    cout << "La moyenne est : " << moyenne(notes,6) << endl;
    return 0;
}


double moyenne(double tab[], int length)
{
    double sum = 0;
    for(int i = 0; i<length; i++){
        sum += tab[i];
    }
    return sum/length;
}