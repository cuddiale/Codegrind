# Scrivere un programma che avvia tre processi per stampare "Hello, World!" 5 volte ciascuno.

from multiprocessing import Process

def say_hello():
    for _ in range(5):
        print("Hello, World!")

if __name__ == '__main__':
    processes = [Process(target=say_hello) for _ in range(3)]

    for p in processes:
        p.start()

    for p in processes:
        p.join()