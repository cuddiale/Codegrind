# Scrivi una funzione che prende una lista di parole e restituisce una lista contenente solo le parole che iniziano con una lettera specificata.

def parole_con_lettera(lista, lettera):
    risultato = []
    for parola in lista:
        if parola[0] == lettera:
            risultato.append(parola)
    return risultato