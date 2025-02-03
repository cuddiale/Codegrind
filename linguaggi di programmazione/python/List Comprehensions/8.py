# Generare una lista di numeri interi casuali e utilizzare una list comprehension per selezionare solo quelli che sono multipli di 3.

import random

numeri_casuali = [random.randint(1, 100) for _ in range(10)]
multipli_di_3 = [num for num in numeri_casuali if num % 3 == 0]
print(multipli_di_3)