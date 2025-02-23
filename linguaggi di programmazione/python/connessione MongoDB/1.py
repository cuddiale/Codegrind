# Esempio di connessione a un database MongoDB usando pymongo.

from pymongo import MongoClient

def connect_db():
    client = MongoClient('mongodb://localhost:27017/')
    db = client['testdb']
    print("Connessione al database:", db.name)
    client.close()

connect_db()