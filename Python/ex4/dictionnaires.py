#1. créez un dictionnaire appelé  fruits  avec les clés  pomme  ,  
#banane  et  orange  , et les valeurs  rouge  ,  jaune  et  orange
fruits = {}
fruits["pomme"] = "rouge"
fruits["banane"] = "jaune"
fruits["orange"] = "orange"

#2. Ajoutez la clé  kiwi  avec la valeur  vert  au dictionnaire  fruits  .
fruits["kiwi"] = "vert"

#3. Accédez à la valeur correspondant à la clé  banane  
#et stockez-la dans une variable appelée  couleur_banane  .
couleur_banane = fruits["banane"]

#4. Modifiez la valeur associée à la clé  pomme  pour  vert  .
fruits["pomme"] = "vert"

#5. Supprimez la clé  orange  du dictionnaire  fruits  .
fruits.pop("orange")

#6. Affichez les clés restantes dans le dictionnaire.
print(fruits.keys())