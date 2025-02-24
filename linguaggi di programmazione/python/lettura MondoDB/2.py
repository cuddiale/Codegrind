# Leggere più documenti da una collezione utilizzando pymongo e OOP.

from pymongo import MongoClient

class MongoDBConnection:
    def __init__(self, uri, db_name, collection_name):
        self.client = MongoClient(uri)
        self.db = self.client[db_name]
        self.collection = self.db[collection_name]

    def read_multiple_documents(self, query):
        documents = self.collection.find(query)
        for document in documents:
            print("Documento trovato:", document)

    def close(self):
        self.client.close()

# Uso
db_connection = MongoDBConnection('mongodb://localhost:27017/', 'testdb', 'employees')
db_connection.read_multiple_documents({})
db_connection.close()