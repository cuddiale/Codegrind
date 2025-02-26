# Utilizzare l'aggregazione per aggiungere un campo calcolato "total_compensation" che è la somma di "salary" e "bonus".

from pymongo import MongoClient

def aggregate_with_computed_field():
    client = MongoClient('mongodb://localhost:27017/')
    db = client['testdb']
    collection = db['employees']
    pipeline = [
        {"$project": {"name": 1, "salary": 1, "bonus": 1, "total_compensation": {"$sum": ["$salary", "$bonus"]}, "_id": 0}}
    ]
    result = collection.aggregate(pipeline)
    for doc in result:
        print(doc)
    client.close()

aggregate_with_computed_field()