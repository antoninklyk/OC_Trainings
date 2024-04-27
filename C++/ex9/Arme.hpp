#ifndef DEF_ARME
#define DEF_ARME

#include <iostream>
#include <string>


class Arme{

    public :

    Arme();
    Arme(std::string nom, int degats);
    int getDegats();
    void changerArme(std::string nomNouvelleArme, int degatsNouvelleArme);
    void changer(std::string nom, int degats);
    void afficher() const;
    ~Arme();

    private :

    std::string m_nomArme;
    int m_degatsArme;
};

#endif