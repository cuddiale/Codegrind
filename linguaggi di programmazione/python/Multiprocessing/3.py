# Implementare un processo che esegue un countdown da 10 a 1 e stampa "Fine!" al termine.

from multiprocessing import Process

def countdown():
    for i in range(10, 0, -1):
        print(i)
    print("Fine!")

if __name__ == '__main__':
    process = Process(target=countdown)
    process.start()
    process.join()