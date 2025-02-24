# Aggiornare un singolo documento in una collezione utilizzando pymongo.

from pymongo import MongoClient

def update_single_document():
    client = MongoClient('mongodb://localhost:27017/')
    db = client['testdb']
    collection = db['employees']
    result = collection.update_one({"name": "John Doe"}, {"$set": {"position": "Senior Software Engineer"}})
    print("Documenti modificati:", result.modified_count)
    client.close()

update_single_document()