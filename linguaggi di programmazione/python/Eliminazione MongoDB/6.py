# Eliminare un documento utilizzando un indice specifico con pymongo e OOP.

from pymongo import MongoClient

class MongoDBConnection:
    def __init__(self, uri, db_name, collection_name):
        self.client = MongoClient(uri)
        self.db = self.client[db_name]
        self.collection = self.db[collection_name]

    def delete_document_by_id(self, document_id):
        result = self.collection.delete_one({"_id": document_id})
        print("Documenti eliminati:", result.deleted_count)

    def close(self):
        self.client.close()

# Uso
from bson.objectid import ObjectId

db_connection = MongoDBConnection('mongodb://localhost:27017/', 'testdb', 'employees')
db_connection.delete_document_by_id(ObjectId("64b61ec69c77c5c3f1a267c9"))
db_connection.close()