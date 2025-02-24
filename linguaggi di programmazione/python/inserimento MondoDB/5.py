# Inserire un singolo documento utilizzando pymongo con gestione delle eccezioni.

from pymongo import MongoClient, errors

def insert_single_document():
    client = MongoClient('mongodb://localhost:27017/')
    db = client['testdb']
    collection = db['employees']
    document = {"name": "Eva Green", "position": "HR Manager"}
    try:
        result = collection.insert_one(document)
        print("Documento inserito con ID:", result.inserted_id)
    except errors.PyMongoError as e:
        print("Errore nell'inserimento:", e)
    finally:
        client.close()

insert_single_document()