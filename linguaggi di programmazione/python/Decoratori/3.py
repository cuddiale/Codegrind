# Implementare un decoratore che converte l'output di una funzione in maiuscolo.

def uppercase(func):
    def wrapper(*args, **kwargs):
        original_result = func(*args, **kwargs)
        modified_result = original_result.upper()
        return modified_result
    return wrapper

@uppercase
def messaggio():
    return 'ciao mondo'

print(messaggio())