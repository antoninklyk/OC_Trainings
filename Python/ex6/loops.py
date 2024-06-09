liste = [1,2,3,4]

#Calculez et affichez la somme et la moyenne des nombres dans la liste.
sum = 0
n = 0
for i in liste:
    sum += i
    n+=1
print(f"sum de la liste : {sum}")
mean = sum / n
print(f"moyenne de la liste : {mean}")

#Calculez et affichez le nombre de nombres dans la liste qui sont supérieurs à la moyenne.
n_sup_mean = 0
for i in liste:
    if i > mean:
        n_sup_mean += 1
print(f"nb de nb sup à la moyenne dans liste : {n_sup_mean}")

#CCalculez et affichez le nombre de nombres dans la liste qui sont pairs.
n_pair = 0
for i in liste:
    if i % 2 == 0:
        n_pair += 1
print(f"nb de nb pairs dans liste : {n_pair}")