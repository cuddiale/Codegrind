# Utilizzare threading per calcolare simultaneamente somme di parti diverse di una stessa lista.

import threading

lista = list(range(1, 101))
risultati = []

def partial_sum(start, end):
    total = sum(lista[start:end])
    risultati.append(total)
    print(f"Somma parziale: {total}")

thread1 = threading.Thread(target=partial_sum, args=(0, 50))
thread2 = threading.Thread(target=partial_sum, args=(50, 100))

thread1.start()
thread2.start()

thread1.join()
thread2.join()

print("Somma totale:", sum(risultati))