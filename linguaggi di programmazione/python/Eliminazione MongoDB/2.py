# Eliminare più documenti da una collezione utilizzando pymongo e OOP.

from pymongo import MongoClient

class MongoDBConnection:
    def __init__(self, uri, db_name, collection_name):
        self.client = MongoClient(uri)
        self.db = self.client[db_name]
        self.collection = self.db[collection_name]

    def delete_multiple_documents(self, query):
        result = self.collection.delete_many(query)
        print("Documenti eliminati:", result.deleted_count)

    def close(self):
        self.client.close()

# Uso
db_connection = MongoDBConnection('mongodb://localhost:27017/', 'testdb', 'employees')
db_connection.delete_multiple_documents({"position": "Intern"})
db_connection.close()