# Eliminare un singolo documento da una collezione utilizzando pymongo.

from pymongo import MongoClient

def delete_single_document():
    client = MongoClient('mongodb://localhost:27017/')
    db = client['testdb']
    collection = db['employees']
    result = collection.delete_one({"name": "John Doe"})
    print("Documenti eliminati:", result.deleted_count)
    client.close()

delete_single_document()