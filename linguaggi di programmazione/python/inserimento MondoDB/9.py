# Inserire un singolo documento utilizzando pymongo e verificare se il documento esiste già.

from pymongo import MongoClient

def insert_single_document():
    client = MongoClient('mongodb://localhost:27017/')
    db = client['testdb']
    collection = db['employees']
    document = {"name": "Karen Page", "position": "Journalist"}
    if collection.count_documents(document) == 0:
        result = collection.insert_one(document)
        print("Documento inserito con ID:", result.inserted_id)
    else:
        print("Il documento esiste già.")
    client.close()

insert_single_document()