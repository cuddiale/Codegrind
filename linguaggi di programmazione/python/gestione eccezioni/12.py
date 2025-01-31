# Scrivere un programma che prova ad aggiungere un elemento a un tuple, mostrando un messaggio nel blocco `finally`.

try:
    tupla = (1, 2, 3)
    tupla[0] = 4
except TypeError:
    print("Errore: Impossibile modificare una tupla.")
finally:
    print("Modifica di tupla tentata.")