# Creare un decoratore che limita il numero di volte che una funzione può essere chiamata.

def limit_calls(num_calls):
    def decorator(func):
        calls = 0
        def wrapper(*args, **kwargs):
            nonlocal calls
            if calls >= num_calls:
                raise Exception("Numero massimo di chiamate superato")
            calls += 1
            return func(*args, **kwargs)
        return wrapper
    return decorator

@limit_calls(3)
def saluta():
    print("Ciao!")

saluta()
saluta()
saluta()
saluta()