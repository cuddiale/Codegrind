# Utilizzare la formattazione delle stringhe per ottenere "Il numero binario di 42 è 0b101010". Per il binario utilizzare bin(numero)

numero = 42
print(f"Il numero binario di {numero} è {bin(numero)}")

# oppure

numero = 42
stringa = "Il numero binario di {} è {}".format(numero, bin(numero))

print(stringa)