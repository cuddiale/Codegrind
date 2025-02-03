# Creare un set di lunghezze delle parole di una lista utilizzando set comprehension.

parole = ["apple", "banana", "cherry", "date"]
lunghezze = {len(parola) for parola in parole}
print(lunghezze)