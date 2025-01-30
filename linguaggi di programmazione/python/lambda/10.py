# Scrivi una lambda function che prenda una lista di tuple e restituisca una lista di tuple ordinate per il secondo elemento di ciascuna tupla.

ordina_per_secondo_elemento = lambda lista: sorted(lista, key=lambda tupla: tupla[1])