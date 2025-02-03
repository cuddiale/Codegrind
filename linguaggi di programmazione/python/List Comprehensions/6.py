# Utilizzare una list comprehension per creare una lista di tuple, ognuna contenente un numero e il suo quadrato.

lista = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

quadrati = [(i, i**2) for i in lista]

print(quadrati)

