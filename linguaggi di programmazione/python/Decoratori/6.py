# Implementare un decoratore che memorizza (cache) il risultato di una funzione per ridurre il tempo di calcolo su chiamate successive con gli stessi argomenti.

def memoize(func):
    cache = {}
    def wrapper(*args):
        if args in cache:
            return cache[args]
        result = func(*args)
        cache[args] = result
        return result
    return wrapper

@memoize
def fib(n):
    if n < 2:
        return n
    return fib(n-1) + fib(n-2)

print(fib(30))