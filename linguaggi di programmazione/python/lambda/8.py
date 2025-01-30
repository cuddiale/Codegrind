# Scrivi una lambda function che prenda una lista di dizionari e restituisca una lista di tutte le chiavi dei dizionari.

tutte_le_chiavi = lambda lista: [chiave for dizionario in lista for chiave in dizionario.keys()]