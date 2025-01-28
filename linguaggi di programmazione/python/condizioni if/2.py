# Scrivere un programma che chiede all'utente di inserire due numeri e stampa "Il primo numero è maggiore" se il primo numero è maggiore del secondo, "Il secondo numero è maggiore" se il secondo numero è maggiore del primo, altrimenti stampa "I numeri sono uguali".

numero1 = int(input("Inserisci il primo numero: "))
numero2 = int(input("Inserisci il secondo numero: "))

if numero1 > numero2:
    print("Il primo numero è maggiore")
elif numero2 > numero1:
    print("Il secondo numero è maggiore")
else:
    print("I numeri sono uguali")

