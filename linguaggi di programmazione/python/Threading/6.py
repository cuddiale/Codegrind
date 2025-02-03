# Scrivere un programma che avvia tre thread per stampare ognuno "Hello, World!" 5 volte.

def say_hello():
    for _ in range(5):
        print("Hello, World!")

threads = [threading.Thread(target=say_hello) for _ in range(3)]

for thread in threads:
    thread.start()

for thread in threads:
    thread.join()