# Utilizzare una set comprehension per rimuovere i duplicati da una lista di numeri.

numeri = [1, 2, 2, 3, 4, 4, 5]
unici = {num for num in numeri}
print(unici)