# Scrivere un programma che accede a un indice di una lista e gestisce l'eccezione se l'indice è fuori dai limiti della lista.

lista = [1, 2, 3]
try:
    indice = int(input("Inserisci l'indice: "))
    print(lista[indice])
except IndexError:
    print("Errore: Indice fuori dai limiti.")