# Aggiornare un documento modificando un array all'interno del documento utilizzando pymongo e OOP.

from pymongo import MongoClient

class MongoDBConnection:
    def __init__(self, uri, db_name, collection_name):
        self.client = MongoClient(uri)
        self.db = self.client[db_name]
        self.collection = self.db[collection_name]

    def update_array_field(self, query, update):
        result = self.collection.update_one(query, update)
        print("Documenti modificati:", result.modified_count)

    def close(self):
        self.client.close()

# Uso
db_connection = MongoDBConnection('mongodb://localhost:27017/', 'testdb', 'projects')
db_connection.update_array_field(
    {"project_name": "Project X"},
    {"$push": {"team_members": {"name": "New Member", "role": "Tester"}}}
)
db_connection.close()