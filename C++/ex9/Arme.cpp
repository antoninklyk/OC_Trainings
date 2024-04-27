#include "Arme.hpp"

using namespace std;

Arme::Arme() : m_nomArme("Epee rouillee"), m_degatsArme(10)
{

}

Arme::Arme(std::string nom, int degats) : m_nomArme(nom), m_degatsArme(degats)
{

}

int Arme::getDegats()
{
    return m_degatsArme; 
}

void Arme::changerArme(string nomNouvelleArme, int degatsNouvelleArme)
{
    m_nomArme = nomNouvelleArme;
    m_degatsArme = degatsNouvelleArme;
}


void Arme::changer(std::string nom, int degats)
{
    m_nomArme = nom;
    m_degatsArme = degats;
}

void Arme::afficher() const
{
    cout << "nom Arme : " << m_nomArme << endl;
    cout << "Dégat Arme : " << m_degatsArme << endl;
    
}

Arme::~Arme(){

}