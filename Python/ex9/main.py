import operation.operations
#from operation.operations import addition
#from operation.operations import multiplication
#from operation.operations import * #mauvaise pratique

if __name__ == '__main__':
    resultat1 = operation.operations.addition(10,5)
    print(resultat1)
    resultat2 = operation.operations.multiplication(8,4)
    print(resultat2)
