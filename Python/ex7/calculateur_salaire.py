
def calcu_salaire_mensuel(salaire_annuel):
    salaire_mensuel = salaire_annuel / 12
    return salaire_mensuel

def calcu_salaire_hebdo(salaire_mensuel):
    salaire_hebdo = salaire_mensuel / 4
    return salaire_hebdo

def calcu_salaire_horaire(salaire_hebdo, nb_heures):
    salaire_horaire = salaire_hebdo / nb_heures
    return salaire_horaire

print("Salaire annuel ?")
annuel = int(input())

print("Nb heure travaillées / semaine ?")
nb_heure = int(input())

salaire_mensuel = calcu_salaire_mensuel(annuel)
salaire_hebdo = calcu_salaire_hebdo(salaire_mensuel)
salaire_horaire = calcu_salaire_horaire(salaire_hebdo,nb_heure)

print(f"Votre salaire horaire est de {salaire_horaire} euros/h ")