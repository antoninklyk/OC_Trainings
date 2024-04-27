#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string const nomfichier = "/home/antokl/Documents/Projects/OC/C++/ex6/fichiers.txt";

    ofstream monFlux(nomfichier.c_str(), ios::app);

    if(monFlux)
    {
        monFlux << "Bonjour, je suis une phrase écrite dans un fichier." << endl;
        monFlux << 42.1337 << endl;
        int age(36);
        monFlux << "J'ai " << age << " ans." << endl;

    }else{

            cout << "ERREUR: Impossible d'ouvrir le fichier." << endl;

    }
    return 0;
}