# Creare una list comprehension che include solo le stringhe di lunghezza superiore a 5 caratteri da una lista.

lista = ["ciao", "come", "stai", "io", "sto", "bene", "grazie"]

lunghezze = [i for i in lista if len(i) > 5]

print(lunghezze)

