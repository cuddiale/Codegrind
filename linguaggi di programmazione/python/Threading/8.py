# Implementare due thread che modificano una lista condivisa aggiungendo elementi.

import threading

shared_list = []

def add_items():
    for i in range(5):
        shared_list.append(i)
        print(f"Elemento aggiunto: {i}")

thread1 = threading.Thread(target=add_items)
thread2 = threading.Thread(target=add_items)

thread1.start()
thread2.start()

thread1.join()
thread2.join()

print("Lista finale:", shared_list)