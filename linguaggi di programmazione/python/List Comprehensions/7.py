# Scrivere una list comprehension che filtra i numeri dispari di una lista e calcola il cubo di ciascuno.

numeri = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
cubi_dispari = [x**3 for x in numeri if x % 2 != 0]
print(cubi_dispari)