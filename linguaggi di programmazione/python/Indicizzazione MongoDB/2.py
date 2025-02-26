# Creare un indice composto su più colonne ("name" e "position") utilizzando pymongo. Questo indice migliorerà le prestazioni delle query che filtrano su entrambi i campi.

from pymongo import MongoClient

class MongoDBConnection:
    def __init__(self, uri, db_name, collection_name):
        self.client = MongoClient(uri)
        self.db = self.client[db_name]
        self.collection = self.db[collection_name]

    def create_compound_index(self):
        result = self.collection.create_index([("name", 1), ("position", 1)])
        print("Indice composto creato:", result)

    def close(self):
        self.client.close()

# Uso
db_connection = MongoDBConnection('mongodb://localhost:27017/', 'testdb', 'employees')
db_connection.create_compound_index()
db_connection.close()