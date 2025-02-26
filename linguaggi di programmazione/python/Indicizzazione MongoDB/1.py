# Creare un indice su una singola colonna utilizzando pymongo. Questo indice velocizzerà le query basate sul campo "name".

from pymongo import MongoClient

def create_simple_index():
    client = MongoClient('mongodb://localhost:27017/')
    db = client['testdb']
    collection = db['employees']
    result = collection.create_index("name")
    print("Indice creato:", result)
    client.close()

create_simple_index()