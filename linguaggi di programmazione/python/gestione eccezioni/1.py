# Scrivere un programma che tenta di dividere 10 per un numero inserito dall'utente, gestendo l'errore se l'utente inserisce 0.

try:
    numero = int(input("Inserisci un numero: "))
    risultato = 10 / numero
    print("Il risultato è:", risultato)
except ZeroDivisionError:
    print("Errore: Non è possibile dividere per zero.")