# Eseguire una query geospaziale per trovare tutti i luoghi entro un raggio di 5 km da un punto specifico.

from pymongo import MongoClient

def geospatial_query():
    client = MongoClient('mongodb://localhost:27017/')
    db = client['testdb']
    collection = db['places']
    collection.create_index([("location", "2dsphere")])
    query = {
        "location": {
            "$near": {
                "$geometry": {"type": "Point", "coordinates": [12.4964, 41.9028]},
                "$maxDistance": 5000
            }
        }
    }
    result = collection.find(query)
    for doc in result:
        print(doc)
    client.close()

geospatial_query()