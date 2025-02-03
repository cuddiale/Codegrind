# Utilizzare una list comprehension per convertire una lista di gradi Fahrenheit in gradi Celsius.

fahrenheit = [32, 64, 100, 212]
celsius = [(f - 32) * 5/9 for f in fahrenheit]
print(celsius)