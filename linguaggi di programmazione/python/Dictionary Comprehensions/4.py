# Generare un dizionario che mappa ogni numero intero da 1 a 10 al suo valore quadrato usando dictionary comprehension.

squares = {num: num**2 for num in range(1, 11)}
print(squares)
