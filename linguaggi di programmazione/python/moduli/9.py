# Importa il modulo json e crea un dizionario con alcune chiavi e valori. Poi serializza il dizionario in formato JSON e stampalo.

import json

dizionario = {'nome': 'Marco', 'cognome': 'Rossi', 'eta': 30}
json_dizionario = json.dumps(dizionario)

print(json_dizionario)