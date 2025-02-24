# Leggere documenti selezionando specifici campi utilizzando pymongo.

from pymongo import MongoClient

def read_field_filtered_documents():
    client = MongoClient('mongodb://localhost:27017/')
    db = client['testdb']
    collection = db['employees']
    documents = collection.find({}, {"name": 1, "position": 1, "_id": 0})
    for document in documents:
        print("Documento trovato:", document)
    client.close()

read_field_filtered_documents()