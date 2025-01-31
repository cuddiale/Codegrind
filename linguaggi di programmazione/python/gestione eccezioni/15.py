# Scrivere un programma che tenta di aprire
# # un file e leggere il suo contenuto, con un messaggio finale che indica se il file era aperto o meno.

try:
    file = open("file_testo.txt", "r")
    print(file.read())
except FileNotFoundError:
    print("Errore: File non trovato.")
finally:
    if not file.closed:
        file.close()
        print("File chiuso correttamente.")
    else:
        print("File già chiuso.")