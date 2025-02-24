# Aggiornare più documenti in una collezione utilizzando pymongo e OOP.

from pymongo import MongoClient

class MongoDBConnection:
    def __init__(self, uri, db_name, collection_name):
        self.client = MongoClient(uri)
        self.db = self.client[db_name]
        self.collection = self.db[collection_name]

    def update_multiple_documents(self, query, update):
        result = self.collection.update_many(query, update)
        print("Documenti modificati:", result.modified_count)

    def close(self):
        self.client.close()

# Uso
db_connection = MongoDBConnection('mongodb://localhost:27017/', 'testdb', 'employees')
db_connection.update_multiple_documents({"position": "Developer"}, {"$set": {"position": "Software Developer"}})
db_connection.close()