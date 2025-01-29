# Scrivi una funzione che prende una lista di numeri e restituisce una lista contenente solo i numeri pari.

def numeri_pari(lista):
    risultato = []
    for numero in lista:
        if numero % 2 == 0:
            risultato.append(numero)
    return risultato