# Creare un semplice thread che stampa i numeri da 1 a 10.

import threading

def print_numbers():
    for i in range(1, 11):
        print(i)

thread = threading.Thread(target=print_numbers)
thread.start()
thread.join()