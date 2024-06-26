#ifndef DEF_PERSONNAGE
#define DEF_PERSONNAGE

#include <string>

class Personnage
{
    public:

    Personnage();
    //Personnage(std::string nomArme, int degatsArme); //attention au std si utilisation string
    //Personnage(Personnage const& autre); //constructeur de copie
    void recevoirDegats(int nbDegats); //On peut détailler methode ici
    void attaquer(Personnage &cible);
    void boirePotionDeVie(int quantitePotion);
    void changerArme(std::string nomNouvelleArme, int degatsNouvelleArme);
    bool estVivant() const;
    ~Personnage(); //Destructeur

    private:

    int m_vie;
    int m_mana;
    std::string m_nomArme; //Pas de using namespace std, il faut donc mettre std:: devant string
    int m_degatsArme;
};

#endif