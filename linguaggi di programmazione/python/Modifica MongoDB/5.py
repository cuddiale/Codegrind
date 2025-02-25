# Aggiornare un documento con opzioni specifiche (es. upsert) utilizzando pymongo.

from pymongo import MongoClient

def update_with_options():
    client = MongoClient('mongodb://localhost:27017/')
    db = client['testdb']
    collection = db['employees']
    result = collection.update_one(
        {"name": "Alice Smith"},
        {"$set": {"position": "Principal Data Scientist"}},
        upsert=True
    )
    print("Documenti modificati o inseriti:", result.upserted_id or result.modified_count)
    client.close()

update_with_options()