# Creare un thread che esegue un'operazione matematica semplice e restituisce il risultato tramite una coda.

from queue import Queue
import threading

def calculate_sum(q):
    total = sum(range(1, 11))
    q.put(total)

q = Queue()
thread = threading.Thread(target=calculate_sum, args=(q,))
thread.start()
thread.join()
result = q.get()
print("La somma è:", result)