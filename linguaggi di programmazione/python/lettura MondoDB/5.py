# Leggere documenti con una condizione specifica utilizzando pymongo.

from pymongo import MongoClient

def read_conditional_documents():
    client = MongoClient('mongodb://localhost:27017/')
    db = client['testdb']
    collection = db['employees']
    documents = collection.find({"position": "Data Scientist"})
    for document in documents:
        print("Documento trovato:", document)
    client.close()

read_conditional_documents()