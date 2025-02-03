# Creare una list comprehension che estrae le vocali da una stringa data.

stringa = "List comprehension in Python"
vocali = [char for char in stringa if char in 'aeiouAEIOU']
print(vocali)