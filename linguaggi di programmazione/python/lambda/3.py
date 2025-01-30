# Scrivi una lambda function che prenda una lista di parole e restituisca una lista contenente solo le parole che iniziano con la lettera "a".

filtra_parole = lambda lista: [parola for parola in lista if parola.startswith("a")]