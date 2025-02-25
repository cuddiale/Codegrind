# Eliminare documenti con una condizione specifica utilizzando pymongo.

from pymongo import MongoClient

def delete_conditional_documents():
    client = MongoClient('mongodb://localhost:27017/')
    db = client['testdb']
    collection = db['employees']
    result = collection.delete_many({"years_of_experience": {"$lt": 1}})
    print("Documenti eliminati:", result.deleted_count)
    client.close()

delete_conditional_documents()