# Utilizzare una dictionary comprehension per convertire una lista di tuple (chiave, valore) in un dizionario.

tuples = [('a', 1), ('b', 2), ('c', 3)]
dizionario = {k: v for k, v in tuples}
print(dizionario)