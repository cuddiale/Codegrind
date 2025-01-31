# Scrivere un programma che converte una stringa in un numero intero e gestisce l'eccezione se la stringa non è un numero valido.

try:
    num = int(input("Inserisci un numero: "))
    print(num)
except ValueError:
    print("Il valore inserito non è un numero valido.")

