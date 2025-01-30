# Scrivi una lambda function che prenda una lista di parole e restituisca la lunghezza media delle parole nella lista.

lunghezza_media = lambda lista: sum(len(parola) for parola in lista) / len(lista)