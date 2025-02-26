# Eseguire un'aggregazione con condizione per contare il numero di dipendenti in ogni dipartimento utilizzando pymongo e OOP.

from pymongo import MongoClient

class MongoDBConnection:
    def __init__(self, uri, db_name, collection_name):
        self.client = MongoClient(uri)
        self.db = self.client[db_name]
        self.collection = self.db[collection_name]

    def aggregate_count_by_department(self):
        pipeline = [
            {"$group": {"_id": "$department", "count": {"$sum": 1}}}
        ]
        result = self.collection.aggregate(pipeline)
        for doc in result:
            print("Dipartimento:", doc["_id"], "Numero di dipendenti:", doc["count"])

    def close(self):
        self.client.close()

# Uso
db_connection = MongoDBConnection('mongodb://localhost:27017/', 'testdb', 'employees')
db_connection.aggregate_count_by_department()
db_connection.close()