# Scrivere un programma che apre un file per la lettura e gestisce l'eccezione se il file non esiste.

try:
    with open("file_non_esistente.txt", "r") as file:
        print(file.read())
except FileNotFoundError:
    print("Errore: File non trovato.")