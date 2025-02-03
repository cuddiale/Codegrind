# Implementare un decoratore che ripete l'esecuzione di una funzione decorata per un numero specificato di volte.

def repeat(num_times):
    def decorator(func):
        def wrapper(*args, **kwargs):
            for _ in range(num_times):
                result = func(*args, **kwargs)
            return result
        return wrapper
    return decorator

@repeat(4)
def saluta(nome):
    print(f"Ciao {nome}!")

saluta("Alice")