# Eliminare un indice esistente dalla collezione "employees" utilizzando pymongo. Specificare il nome dell'indice da eliminare.

from pymongo import MongoClient

class MongoDBConnection:
    def __init__(self, uri, db_name, collection_name):
        self.client = MongoClient(uri)
        self.db = self.client[db_name]
        self.collection = self.db[collection_name]

    def drop_index(self, index_name):
        result = self.collection.drop_index(index_name)
        print("Indice eliminato:", result)

    def close(self):
        self.client.close()

# Uso
db_connection = MongoDBConnection('mongodb://localhost:27017/', 'testdb', 'employees')
db_connection.drop_index("name_1")
db_connection.close()