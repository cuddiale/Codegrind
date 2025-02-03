# Utilizzare una dictionary comprehension per mappare ogni carattere di una stringa alla sua posizione nell'alfabeto.

import string
alfabeto = {lettera: index + 1 for index, lettera in enumerate(string.ascii_lowercase)}
caratteri = "hello"
posizioni = {char: alfabeto[char] for char in caratteri if char in alfabeto}
print(posizioni)