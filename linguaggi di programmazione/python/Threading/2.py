# Scrivere un programma che avvia due thread; uno stampa numeri pari e l'altro stampa numeri dispari fino a 10.

def print_even():
    for i in range(2, 11, 2):
        print(f"Pari: {i}")

def print_odd():
    for i in range(1, 11, 2):
        print(f"Dispari: {i}")

thread1 = threading.Thread(target=print_even)
thread2 = threading.Thread(target=print_odd)

thread1.start()
thread2.start()

thread1.join()
thread2.join()