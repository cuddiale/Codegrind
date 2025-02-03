# Generare una lista delle lunghezze delle parole in una frase utilizzando list comprehensions.

frase = "Ciao come stai? Io sto bene, grazie!"

lunghezze = [len(parola) for parola in frase.split()]

print(lunghezze)

