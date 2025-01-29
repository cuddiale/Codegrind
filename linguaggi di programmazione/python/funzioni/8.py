# Scrivi una funzione che prende una lista di numeri e restituisce la media dei numeri.

def media(lista):
    somma = 0
    for numero in lista:
        somma += numero
    media = somma / len(lista)
    return media