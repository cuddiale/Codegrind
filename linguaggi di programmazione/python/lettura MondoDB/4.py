# Leggere più documenti da una collezione utilizzando motor e OOP.

import motor.motor_asyncio
import asyncio

class MongoDBConnection:
    def __init__(self, uri, db_name, collection_name):
        self.client = motor.motor_asyncio.AsyncIOMotorClient(uri)
        self.db = self.client[db_name]
        self.collection = self.db[collection_name]

    async def read_multiple_documents(self, query):
        async for document in self.collection.find(query):
            print("Documento trovato:", document)

    def close(self):
        self.client.close()

# Uso
async def main():
    db_connection = MongoDBConnection('mongodb://localhost:27017/', 'testdb', 'employees')
    await db_connection.read_multiple_documents({})
    db_connection.close()

asyncio.run(main())