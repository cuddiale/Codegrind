# Utilizzare l'aggregazione per trovare i dipendenti che lavorano nel dipartimento "Sales" e hanno un salario maggiore di 50000. Proiettare solo i campi "name" e "salary".

from pymongo import MongoClient

def aggregate_with_multiple_conditions():
    client = MongoClient('mongodb://localhost:27017/')
    db = client['testdb']
    collection = db['employees']
    pipeline = [
        {"$match": {"department": "Sales", "salary": {"$gt": 50000}}},
        {"$project": {"name": 1, "salary": 1, "_id": 0}}
    ]
    result = collection.aggregate(pipeline)
    for doc in result:
        print(doc)
    client.close()

aggregate_with_multiple_conditions()