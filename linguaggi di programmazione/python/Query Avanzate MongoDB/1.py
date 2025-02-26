# Utilizzare l'aggregazione per raggruppare i dipendenti per dipartimento e ordinare i risultati per numero di dipendenti in ogni dipartimento.

from pymongo import MongoClient

def aggregate_group_and_sort():
    client = MongoClient('mongodb://localhost:27017/')
    db = client['testdb']
    collection = db['employees']
    pipeline = [
        {"$group": {"_id": "$department", "num_employees": {"$sum": 1}}},
        {"$sort": {"num_employees": -1}}
    ]
    result = collection.aggregate(pipeline)
    for doc in result:
        print("Dipartimento:", doc["_id"], "Numero di dipendenti:", doc["num_employees"])
    client.close()

aggregate_group_and_sort()