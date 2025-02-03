# Creare un set usando set comprehension che contiene tutti i numeri interi divisibili per 5 in un range da 1 a 50.

divisibili_per_5 = {x for x in range(1, 51) if x % 5 == 0}
print(divisibili_per_5)