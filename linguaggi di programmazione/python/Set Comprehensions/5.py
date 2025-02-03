# Utilizzare una set comprehension per convertire una lista di numeri in una stringa di numeri unici, separati da virgole.

numeri = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
numeri_unici = {str(num) for num in numeri}
numeri_unici = ', '.join(numeri_unici)
print(numeri_unici)
