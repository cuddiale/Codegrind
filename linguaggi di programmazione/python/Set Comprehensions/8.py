# Utilizzare una set comprehension per creare un set di tutti i numeri primi tra 1 e 100.

def is_prime(n):
    if n < 2:
        return False
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            return False
    return True

primi = {x for x in range(2, 101) if is_prime(x)}
print(primi)