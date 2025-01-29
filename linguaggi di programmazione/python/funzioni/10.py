# Scrivi una funzione che prende una lista di numeri e restituisce una lista contenente solo i numeri maggiori di un valore specificato.

def numeri_maggiori_di(lista, valore):
    risultato = []
    for numero in lista:
        if numero > valore:
            risultato.append(numero)
    return risultato