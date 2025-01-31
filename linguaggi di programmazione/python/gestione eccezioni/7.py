# Scrivere un programma che chiede all'utente di inserire un valore e tenta di usarlo come indice per una lista vuota, gestendo l'errore.

try:
    lista_vuota = []
    indice = int(input("Inserisci un indice: "))
    print(lista_vuota[indice])
except IndexError:
    print("Errore: Indice non valido per una lista vuota.")