# Visualizzare tutti gli indici esistenti nella collezione "employees" utilizzando pymongo. Questo esercizio aiuta a capire quali indici sono già presenti.

from pymongo import MongoClient

def list_indexes():
    client = MongoClient('mongodb://localhost:27017/')
    db = client['testdb']
    collection = db['employees']
    indexes = collection.index_information()
    for index_name, index_info in indexes.items():
        print(f"Indice: {index_name}, Info: {index_info}")
    client.close()

list_indexes()