# Importa il modulo csv e apri il file dati.csv che contiene una tabella di dati separati da virgola. Poi leggi il contenuto del file e stampalo.

import csv

with open('dati.csv', 'r') as file:
    lettore = csv.reader(file)
    for riga in lettore:
        print(riga)