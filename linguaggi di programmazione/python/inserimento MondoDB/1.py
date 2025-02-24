# Inserire un singolo documento in una collezione utilizzando pymongo.

from pymongo import MongoClient

def insert_single_document():
    client = MongoClient('mongodb://localhost:27017/')
    db = client['testdb']
    collection = db['employees']
    document = {"name": "John Doe", "position": "Software Engineer"}
    result = collection.insert_one(document)
    print("Documento inserito con ID:", result.inserted_id)
    client.close()

insert_single_document()