# Scrivi una funzione che prende una lista di parole e restituisce la parola più lunga.

def parola_piu_lunga(lista):
    piu_lunga = lista[0]
    for parola in lista:
        if len(parola) > len(piu_lunga):
            piu_lunga = parola
    return piu_lunga