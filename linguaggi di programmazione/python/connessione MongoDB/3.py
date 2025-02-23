# Creare una classe per gestire la connessione a un database MongoDB usando pymongo.

from pymongo import MongoClient

class MongoDBConnection:
    def __init__(self, uri, db_name):
        self.client = MongoClient(uri)
        self.db = self.client[db_name]

    def connect(self):
        print("Connessione al database:", self.db.name)

    def close(self):
        self.client.close()
        print("Connessione chiusa.")

# Uso
db_connection = MongoDBConnection('mongodb://localhost:27017/', 'testdb')
db_connection.connect()
db_connection.close()