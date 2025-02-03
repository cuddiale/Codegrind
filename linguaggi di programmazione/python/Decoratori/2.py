# Creare un decoratore che misura il tempo di esecuzione di una funzione.


import time

def timer(func):
    def wrapper(*args, **kwargs):
        start_time = time.time()
        result = func(*args, **kwargs)
        end_time = time.time()
        print(f"Tempo di esecuzione: {end_time - start_time} secondi.")
        return result
    return wrapper

@timer
def calcola():
    sum([i**2 for i in range(10000)])

calcola()