# Scrivere un programma che chiede all'utente di inserire una lettera e stampa "La lettera è una vocale" se la lettera è una vocale (a, e, i, o, u), altrimenti stampa "La lettera non è una vocale".

lettera = input("Inserisci una lettera: ")
if lettera in "aeiou":
    print("La lettera è una vocale")
else:
    print("La lettera non è una vocale")