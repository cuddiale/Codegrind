# Inserire più documenti in una collezione utilizzando pymongo e OOP.

from pymongo import MongoClient

class MongoDBConnection:
    def __init__(self, uri, db_name, collection_name):
        self.client = MongoClient(uri)
        self.db = self.client[db_name]
        self.collection = self.db[collection_name]

    def insert_multiple_documents(self, documents):
        result = self.collection.insert_many(documents)
        print("Documenti inseriti con IDs:", result.inserted_ids)

    def close(self):
        self.client.close()

# Uso
db_connection = MongoDBConnection('mongodb://localhost:27017/', 'testdb', 'employees')
documents = [
    {"name": "Alice Smith", "position": "Data Scientist"},
    {"name": "Bob Johnson", "position": "Project Manager"}
]
db_connection.insert_multiple_documents(documents)
db_connection.close()