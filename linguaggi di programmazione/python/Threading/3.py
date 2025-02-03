# Implementare un thread che esegue un countdown da 10 a 1 e stampa "Fine!" al termine.

def countdown():
    for i in range(10, 0, -1):
        print(i)
    print("Fine!")

thread = threading.Thread(target=countdown)
thread.start()
thread.join()