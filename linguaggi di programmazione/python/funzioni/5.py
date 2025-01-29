# Scrivi una funzione che prende una lista di parole e restituisce una lista contenente la lunghezza di ciascuna parola.

def lunghezza_parole(lista):
    risultato = []
    for parola in lista:
        risultato.append(len(parola))
    return risultato