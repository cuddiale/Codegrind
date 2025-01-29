# Scrivi una funzione che prende una lista di parole e restituisce una lista contenente solo le parole palindrome.

def parole_palindrome(lista):
    risultato = []
    for parola in lista:
        if parola == parola[::-1]:
            risultato.append(parola)
    return risultato