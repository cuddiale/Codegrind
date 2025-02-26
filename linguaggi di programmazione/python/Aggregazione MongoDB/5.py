# Eseguire un'aggregazione con proiezione per mostrare solo i campi necessari utilizzando pymongo.

from pymongo import MongoClient

def aggregate_with_projection():
    client = MongoClient('mongodb://localhost:27017/')
    db = client['testdb']
    collection = db['employees']
    pipeline = [
        {"$group": {"_id": "$department", "average_salary": {"$avg": "$salary"}}},
        {"$project": {"department": "$_id", "average_salary": 1, "_id": 0}}
    ]
    result = collection.aggregate(pipeline)
    for doc in result:
        print(doc)
    client.close()

aggregate_with_projection()