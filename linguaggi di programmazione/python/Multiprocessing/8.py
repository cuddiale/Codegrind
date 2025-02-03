# Implementare due processi che modificano una lista condivisa aggiungendo elementi, utilizzando un Manager per gestire la lista.

from multiprocessing import Process, Manager

def add_items(shared_list):
    for i in range(5):
        shared_list.append(i)
        print(f"Elemento aggiunto: {i}")

if __name__ == '__main__':
    with Manager() as manager:
        shared_list = manager.list()

        p1 = Process(target=add_items, args=(shared_list,))
        p2 = Process(target=add_items, args=(shared_list,))

        p1.start()
        p2.start()

        p1.join()
        p2.join()

        print("Lista finale:", list(shared_list))