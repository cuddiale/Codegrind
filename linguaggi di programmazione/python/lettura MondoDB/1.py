# Leggere un singolo documento da una collezione utilizzando pymongo.

from pymongo import MongoClient

def read_single_document():
    client = MongoClient('mongodb://localhost:27017/')
    db = client['testdb']
    collection = db['employees']
    document = collection.find_one({"name": "John Doe"})
    print("Documento trovato:", document)
    client.close()

read_single_document()