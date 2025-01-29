# Scrivere un programma che utilizzi un loop for per calcolare la media di una lista di numeri.

lista = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
somma = 0
for i in lista:
    somma += i
media = somma / len(lista)

print(media)

