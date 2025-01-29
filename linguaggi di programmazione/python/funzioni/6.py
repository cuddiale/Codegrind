# Scrivi una funzione che prende una lista di numeri e restituisce il valore massimo.

def valore_massimo(lista):
    massimo = lista[0]
    for numero in lista:
        if numero > massimo:
            massimo = numero
    return massimo