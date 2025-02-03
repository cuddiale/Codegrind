# Scrivere un decoratore `@type_check` che assicura che gli argomenti passati a una funzione corrispondano ai tipi attesi.

def type_check(correct_type):
    def decorator(func):
        def wrapper(arg):
            if not isinstance(arg, correct_type):
                raise TypeError(f"Argomento deve essere di tipo {correct_type.__name__}")
            return func(arg)
        return wrapper
    return decorator

@type_check(int)
def quadrato(numero):
    return numero ** 2

print(quadrato(5))
quadrato('test')