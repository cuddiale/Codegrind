# Connessione a MongoDB utilizzando pymongo con gestione delle eccezioni.

from pymongo import MongoClient, errors

def connect_db():
    try:
        client = MongoClient('mongodb://localhost:27017/')
        db = client['testdb']
        print("Connessione al database:", db.name)
    except errors.ConnectionError as e:
        print("Errore di connessione:", e)
    finally:
        client.close()

connect_db()