# Creare un thread che stampa i primi 20 numeri della sequenza di Fibonacci.

def fibonacci():
    a, b = 0, 1
    for _ in range(20):
        print(a)
        a, b = b, a + b

thread = threading.Thread(target=fibonacci)
thread.start()
thread.join()