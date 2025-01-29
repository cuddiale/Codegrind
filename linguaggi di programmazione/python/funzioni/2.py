# Scrivi una funzione che prende una stringa e restituisce la stringa invertita.

def inverso_stringa(stringa):
    inversa = ''
    indice = len(stringa) - 1
    while indice >= 0:
        inversa += stringa[indice]
        indice -= 1
    return inversa