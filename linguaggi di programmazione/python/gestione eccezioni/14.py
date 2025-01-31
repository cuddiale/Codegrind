# Scrivere un programma che prova a calcolare l'inverso di un numero dato dall'utente e stampa un messaggio in `finally`.

try:
    numero = float(input("Inserisci un numero: "))
    inverso = 1 / numero
    print("L'inverso del numero è:", inverso)
except ZeroDivisionError:
    print("Errore: Non è possibile calcolare l'inverso di zero.")
finally:
    print("Tentativo di calcolo dell'inverso effettuato.")