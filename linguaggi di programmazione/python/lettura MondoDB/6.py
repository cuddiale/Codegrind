# Leggere documenti da una collezione con ordinamento utilizzando pymongo e OOP.

from pymongo import MongoClient

class MongoDBConnection:
    def __init__(self, uri, db_name, collection_name):
        self.client = MongoClient(uri)
        self.db = self.client[db_name]
        self.collection = self.db[collection_name]

    def read_sorted_documents(self, query, sort_field):
        documents = self.collection.find(query).sort(sort_field)
        for document in documents:
            print("Documento trovato:", document)

    def close(self):
        self.client.close()

# Uso
db_connection = MongoDBConnection('mongodb://localhost:27017/', 'testdb', 'employees')
db_connection.read_sorted_documents({}, "name")
db_connection.close()