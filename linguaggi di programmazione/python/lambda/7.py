# Scrivi una lambda function che prenda una lista di numeri e restituisca la somma solo dei numeri pari.

somma_pari = lambda lista: sum(x for x in lista if x % 2 == 0)