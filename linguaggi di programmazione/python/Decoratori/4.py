# Scrivere un decoratore che controlla se l'input di una funzione è non negativo.

def check_non_negative(func):
    def wrapper(*args, **kwargs):
        if any(arg < 0 for arg in args if isinstance(arg, (int, float))):
            raise ValueError("Input non può essere negativo.")
        return func(*args, **kwargs)
    return wrapper

@check_non_negative
def aggiungi(a, b):
    return a + b

print(aggiungi(5, 3))