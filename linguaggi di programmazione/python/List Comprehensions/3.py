# Scrivere una list comprehension che estrae solo i numeri pari da una lista.

lista = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

lista_pari = [x for x in lista if x % 2 == 0]

print(lista_pari)

