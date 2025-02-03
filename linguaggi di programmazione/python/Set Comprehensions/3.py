# Scrivere una set comprehension che estrae solo i numeri pari da un range da 1 a 20.

numeri_pari = {x for x in range(1, 21) if x % 2 == 0}
print(numeri_pari)