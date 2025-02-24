# Inserire più documenti utilizzando motor e gestione delle eccezioni in modalità OOP.

import motor.motor_asyncio
import asyncio

class MongoDBConnection:
    def __init__(self, uri, db_name, collection_name):
        self.client = motor.motor_asyncio.AsyncIOMotorClient(uri)
        self.db = self.client[db_name]
        self.collection = self.db[collection_name]

    async def insert_multiple_documents(self, documents):
        try:
            result = await self.collection.insert_many(documents)
            print("Documenti inseriti con IDs:", result.inserted_ids)
        except Exception as e:
            print("Errore nell'inserimento:", e)

    def close(self):
        self.client.close()

# Uso
async def main():
    db_connection = MongoDBConnection('mongodb://localhost:27017/', 'testdb', 'employees')
    documents = [
        {"name": "Ivan Drago", "position": "Boxer"},
        {"name": "Jack Torrance", "position": "Caretaker"}
    ]
    await db_connection.insert_multiple_documents(documents)
    db_connection.close()

asyncio.run(main())