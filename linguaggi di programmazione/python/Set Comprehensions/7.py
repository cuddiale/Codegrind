# Generare un set di caratteri che non sono vocali da una data stringa utilizzando set comprehension.

stringa = "esempio di set comprehension"
consonanti = {char for char in stringa if char not in 'aeiou '}
print(consonanti)