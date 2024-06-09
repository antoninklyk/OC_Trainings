nombre_a_gauche = 1383647972336
nombre_a_droite = 9376352
symbole = "/"
resultat = 0

if isinstance(nombre_a_gauche,int) and isinstance(nombre_a_droite,int):

    match symbole:
        
        case "+":
            resultat = nombre_a_gauche + nombre_a_droite
        case "-":
            resultat = nombre_a_gauche - nombre_a_droite
        case "*":
            resultat = nombre_a_gauche * nombre_a_droite
        case "/":
            if nombre_a_droite != 0:
                resultat = nombre_a_gauche / nombre_a_droite
            elif nombre_a_droite == 0:
                print("Error Division by zero")
                quit()
        case _:
            print("Error Symbol Unknown")
            quit()

    print(resultat)
    
else:
    print("Error Types Numbers")
    exit()