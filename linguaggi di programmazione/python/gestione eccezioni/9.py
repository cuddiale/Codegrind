# Scrivere un programma che prova a leggere un file e chiude il file indipendentemente dal risultato dell'operazione, usando `finally`.

try:
    file = open("esempio.txt", "r")
    contenuto = file.read()
    print(contenuto)
except FileNotFoundError:
    print("Errore: File non trovato.")
finally:
    file.close()
    print("File chiuso.")