# Utilizzare l'aggregazione con l'operatore `$unwind` per de-normalizzare un array di documenti. Supponiamo che ogni documento "order" contenga un array "items". Creare una query che estrae ogni elemento dell'array "items" come un documento separato.

from pymongo import MongoClient

def aggregate_with_unwind():
    client = MongoClient('mongodb://localhost:27017/')
    db = client['testdb']
    collection = db['orders']
    pipeline = [
        {"$unwind": "$items"},
        {"$project": {"order_id": 1, "item": "$items", "_id": 0}}
    ]
    result = collection.aggregate(pipeline)
    for doc in result:
        print(doc)
    client.close()

aggregate_with_unwind()