# Utilizzare l'aggregazione per filtrare i dipendenti con più di 5 anni di esperienza e proiettare solo i campi "name" e "position".

from pymongo import MongoClient

def aggregate_filter_and_project():
    client = MongoClient('mongodb://localhost:27017/')
    db = client['testdb']
    collection = db['employees']
    pipeline = [
        {"$match": {"years_of_experience": {"$gt": 5}}},
        {"$project": {"name": 1, "position": 1, "_id": 0}}
    ]
    result = collection.aggregate(pipeline)
    for doc in result:
        print(doc)
    client.close()

aggregate_filter_and_project()