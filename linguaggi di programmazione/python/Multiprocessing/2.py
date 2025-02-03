# Scrivere un programma che avvia due processi; uno stampa numeri pari e l'altro numeri dispari fino a 10.

from multiprocessing import Process

def print_even():
    for i in range(2, 11, 2):
        print(f"Pari: {i}")

def print_odd():
    for i in range(1, 11, 2):
        print(f"Dispari: {i}")

if __name__ == '__main__':
    process1 = Process(target=print_even)
    process2 = Process(target=print_odd)

    process1.start()
    process2.start()

    process1.join()
    process2.join()