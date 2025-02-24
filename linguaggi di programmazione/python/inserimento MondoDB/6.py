# Inserire più documenti utilizzando pymongo e gestione delle eccezioni in modalità OOP.

from pymongo import MongoClient, errors

class MongoDBConnection:
    def __init__(self, uri, db_name, collection_name):
        self.client = MongoClient(uri)
        self.db = self.client[db_name]
        self.collection = self.db[collection_name]

    def insert_multiple_documents(self, documents):
        try:
            result = self.collection.insert_many(documents)
            print("Documenti inseriti con IDs:", result.inserted_ids)
        except errors.PyMongoError as e:
            print("Errore nell'inserimento:", e)

    def close(self):
        self.client.close()

# Uso
db_connection = MongoDBConnection('mongodb://localhost:27017/', 'testdb', 'employees')
documents = [
    {"name": "Fiona Apple", "position": "Musician"},
    {"name": "George Harrison", "position": "Guitarist"}
]
db_connection.insert_multiple_documents(documents)
db_connection.close()