# Creare un dictionary comprehension che filtra e mantiene solo i valori pari in un dizionario di numeri.

numeri = {'a': 1, 'b': 2, 'c': 3, 'd': 4}
numeri_pari = {k: v for k, v in numeri.items() if v % 2 == 0}
print(numeri_pari)