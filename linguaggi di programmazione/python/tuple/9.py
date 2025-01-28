# Creare una tupla contenente il quadrato dei numeri interi da 1 a 5.

numeri_quadrati = tuple(x ** 2 for x in range(1, 6))

print(numeri_quadrati)