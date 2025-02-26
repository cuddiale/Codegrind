# Eseguire una ricerca full-text sui documenti nella collezione "articles" utilizzando pymongo. Trovare tutti i documenti che contengono la parola "MongoDB".

from pymongo import MongoClient

def full_text_search():
    client = MongoClient('mongodb://localhost:27017/')
    db = client['testdb']
    collection = db['articles']
    collection.create_index([("content", "text")])
    query = {"$text": {"$search": "MongoDB"}}
    result = collection.find(query)
    for doc in result:
        print(doc)
    client.close()

full_text_search()