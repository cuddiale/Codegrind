# Creare un dictionary comprehension che trasforma un dizionario invertendo il caso delle chiavi (da maiuscole a minuscole e viceversa).

dizionario = {'A': 1, 'b': 2, 'C': 3}
invertito = {k.swapcase(): v for k, v in dizionario.items()}
print(invertito)