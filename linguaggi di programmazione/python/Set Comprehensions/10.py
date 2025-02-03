# Utilizzare una set comprehension per trasformare e normalizzare le parole di una lista a tutte minuscole.

parole = ["Python", "JAVA", "Javascript"]
parole_minuscole = {parola.lower() for parola in parole}
print(parole_minuscole)