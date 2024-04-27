#ifndef DEF_PERSONNAGE
#define DEF_PERSONNAGE

#include <string>

#include "Arme.hpp"

class Personnage
{
    public:

    Personnage();
    Personnage(std::string nomArme, int degatsArme); //Pas de using namespace std, il faut donc mettre std:: devant string
    //Personnage(Personnage const& autre); //constructeur de copie
    void afficherEtat();
    void recevoirDegats(int nbDegats); //On peut détailler methode ici
    void attaquer(Personnage &cible);
    void boirePotionDeVie(int quantitePotion);
    bool estVivant() const;
    int getVie() const;
    ~Personnage(); //Destructeur

    private:

    int m_vie;
    int m_mana;
    Arme m_arme;

};

#endif