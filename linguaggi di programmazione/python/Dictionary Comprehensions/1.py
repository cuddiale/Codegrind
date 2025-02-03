# Creare un dictionary comprehension che conta le occorrenze di ogni carattere in una stringa.

stringa = "ciao come stai"
dizionario = {c: stringa.count(c) for c in stringa}
print(dizionario)
