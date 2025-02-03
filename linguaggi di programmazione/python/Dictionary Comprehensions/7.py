# Generare un dizionario che usa dictionary comprehension per creare un mapping di ogni parola in una lista alla sua lunghezza.

parole = ["apple", "banana", "cherry"]
lunghezze = {parola: len(parola) for parola in parole}
print(lunghezze)