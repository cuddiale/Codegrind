# Scrivere un programma che chiede all'utente di inserire un numero, convertendolo in intero, e usa `finally` per confermare l'input ricevuto.

try:
    numero = int(input("Inserisci un numero: "))
    print("Numero inserito:", numero)
except ValueError:
    print("Errore: Devi inserire un valore numerico.")
finally:
    print("Controllo dell'input completato.")