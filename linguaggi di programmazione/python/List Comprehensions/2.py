# Utilizzare una list comprehension per convertire tutte le stringhe di una lista in maiuscolo.

parole = ["ciao", "mondo", "python"]
parole_maiuscole = [parola.upper() for parola in parole]
print(parole_maiuscole)