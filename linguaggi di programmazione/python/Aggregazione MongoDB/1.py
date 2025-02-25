# Eseguire un'aggregazione semplice per calcolare la media degli stipendi utilizzando pymongo.

from pymongo import MongoClient

def aggregate_average_salary():
    client = MongoClient('mongodb://localhost:27017/')
    db = client['testdb']
    collection = db['employees']
    pipeline = [
        {"$group": {"_id": None, "average_salary": {"$avg": "$salary"}}}
    ]
    result = collection.aggregate(pipeline)
    for doc in result:
        print("Media degli stipendi:", doc["average_salary"])
    client.close()

aggregate_average_salary()