# Scrivere un programma che tenta di chiamare un metodo inesistente su un oggetto, gestendo l'eccezione risultante.

try:
    oggetto = {}
    oggetto.metodo_inesistente()
except AttributeError:
    print("Errore: Metodo non esistente.")