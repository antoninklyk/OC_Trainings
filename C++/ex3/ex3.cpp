#include <iostream>

using namespace std;

int moyenne(int tab[], int nbr)
{
    int moyenne = 0;
    for(int i = 0; i<nbr; i++)
    {
        moyenne += tab[i];
    }
    return moyenne /= nbr;
}

int main()
{
    int notes[5];
    notes[0]= 7;
    notes[1]=7;
    notes[2]=9;
    notes[3]=7;
    notes[4]=19;
    cout << "la moyenne des notes est :" << moyenne(notes,5) <<endl;

    return 0;
}