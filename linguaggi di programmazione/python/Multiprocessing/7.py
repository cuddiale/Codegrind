# Creare un processo che stampa i primi 20 numeri della sequenza di Fibonacci.

from multiprocessing import Process

def fibonacci():
    a, b = 0, 1
    for _ in range(20):
        print(a)
        a, b = b, a + b

if __name__ == '__main__':
    process = Process(target=fibonacci)
    process.start()
    process.join()
