# Eseguire un'aggregazione con ordinamento dei risultati utilizzando pymongo.

from pymongo import MongoClient

def aggregate_with_sorting():
    client = MongoClient('mongodb://localhost:27017/')
    db = client['testdb']
    collection = db['employees']
    pipeline = [
        {"$group": {"_id": "$department", "total_salary": {"$sum": "$salary"}}},
        {"$sort": {"total_salary": -1}}
    ]
    result = collection.aggregate(pipeline)
    for doc in result:
        print(doc)
    client.close()

aggregate_with_sorting()