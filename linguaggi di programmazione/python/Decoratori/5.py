# Creare un decoratore che logga gli argomenti passati a una funzione.

def logger(func):
    def wrapper(*args, **kwargs):
        print(f"Chiamata a {func.__name__} con args={args} kwargs={kwargs}")
        return func(*args, **kwargs)
    return wrapper

@logger
def somma(x, y):
    return x + y

somma(5, 4)