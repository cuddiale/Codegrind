# Creare un nuovo set contenente i numeri pari del set precedente.

numeri = set(range(1, 6))
numeri_pari = set()

for numero in numeri:
    if numero % 2 == 0:
        numeri_pari.add(numero)

print(numeri_pari)


# oppure

numeri_pari2 = set(x for x in numeri if x % 2 == 0)

print(numeri_pari2)