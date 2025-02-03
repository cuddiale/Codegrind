# Creare un dictionary comprehension che estrae solo gli elementi con valori superiori a 10 da un dizionario.

dati = {'x': 5, 'y': 15, 'z': 20}
filtrati = {k: v for k, v in dati.items() if v > 10}
print(filtrati)