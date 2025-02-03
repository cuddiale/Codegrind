# Creare un programma che utilizza i processi per stampare alternativamente "Ping" e "Pong" usando le Queue.

from multiprocessing import Process, Queue
import time

def ping(queue):
    while True:
        queue.put("Ping")
        time.sleep(1)

def pong(queue):
    while True:
        print(queue.get())
        print("Pong")
        time.sleep(1)

if __name__ == '__main__':
    queue = Queue()

    p1 = Process(target=ping, args=(queue,))
    p2 = Process(target=pong, args=(queue,))

    p1.start()
    p2.start()

    p1.join(timeout=5)
    p2.join(timeout=5)

    p1.terminate()
    p2.terminate()

    print("Ping Pong terminato.")