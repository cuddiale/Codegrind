# Scrivere un programma che chiede all'utente di inserire un numero e divide 100 per quel numero, stampando un messaggio in un blocco `finally`.

try:
    numero = int(input("Inserisci un numero: "))
    risultato = 100 / numero
    print("Il risultato della divisione è:", risultato)
except ZeroDivisionError:
    print("Errore: Divisione per zero.")
finally:
    print("Operazione di divisione tentata.")