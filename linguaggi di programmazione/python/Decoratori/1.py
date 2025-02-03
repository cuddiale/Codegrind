# Scrivere un decoratore che stampa il nome della funzione chiamata.

def debug(func):
    def wrapper(*args, **kwargs):
        print(f"Chiamata funzione: {func.__name__}")
        return func(*args, **kwargs)
    return wrapper

@debug
def saluta(nome):
    print(f"Ciao {nome}!")

saluta("Alice")