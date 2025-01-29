# Scrivi una funzione che prende una lista di numeri e restituisce la somma di tutti gli elementi.

def somma_lista(lista):
    somma = 0
    for numero in lista:
        somma += numero
    return somma
