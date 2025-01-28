# Scrivi un programma che chieda all'utente di inserire tre numeri interi che rappresentano i lati di un triangolo. Il programma deve verificare se questi tre numeri formano un triangolo rettangolo. Se i tre numeri soddisfano la condizione per essere un triangolo rettangolo (cioè rispettano il teorema di Pitagora), allora stampa "I tre numeri formano un triangolo rettangolo". Altrimenti, stampa "I tre numeri non formano un triangolo rettangolo".

a = int(input("Inserisci il primo lato: "))
b = int(input("Inserisci il secondo lato: "))
c = int(input("Inserisci il terzo lato: "))

if a**2 + b**2 == c**2 or a**2 + c**2 == b**2 or b**2 + c**2 == a**2:
    print("I tre numeri formano un triangolo rettangolo")
else:
    print("I tre numeri non formano un triangolo rettangolo")