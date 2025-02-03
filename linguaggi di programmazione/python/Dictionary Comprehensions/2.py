# Utilizzare una dictionary comprehension per invertire le chiavi e i valori di un dizionario dato.

dizionario = {'a': 1, 'b': 2, 'c': 3}
inverso = {value: key for key, value in dizionario.items()}
print(inverso)