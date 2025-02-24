# Inserire più documenti utilizzando motor e verificare se i documenti esistono già in modalità OOP.

import motor.motor_asyncio
import asyncio

class MongoDBConnection:
    def __init__(self, uri, db_name, collection_name):
        self.client = motor.motor_asyncio.AsyncIOMotorClient(uri)
        self.db = self.client[db_name]
        self.collection = self.db[collection_name]

    async def insert_multiple_documents(self, documents):
        for document in documents:
            if await self.collection.count_documents(document) == 0:
                try:
                    result = await self.collection.insert_one(document)
                    print("Documento inserito con ID:", result.inserted_id)
                except Exception as e:
                    print("Errore nell'inserimento:", e)
            else:
                print("Il documento esiste già:", document)

    def close(self):
        self.client.close()

# Uso
async def main():
    db_connection = MongoDBConnection('mongodb://localhost:27017/', 'testdb', 'employees')
    documents = [
        {"name": "Lara Croft", "position": "Adventurer"},
        {"name": "Mario Rossi", "position": "Plumber"}
    ]
    await db_connection.insert_multiple_documents(documents)
    db_connection.close()

asyncio.run(main())