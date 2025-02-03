# Creare un processo che stampa i numeri da 1 a 10.

from multiprocessing import Process

def print_numbers():
    for i in range(1, 11):
        print(i)

if __name__ == '__main__':
    process = Process(target=print_numbers)
    process.start()
    process.join()