# Creare un indice di testo sul campo "description" utilizzando motor. Questo indice permetterà ricerche full-text sulla descrizione.

import motor.motor_asyncio
import asyncio

class MongoDBConnection:
    def __init__(self, uri, db_name, collection_name):
        self.client = motor.motor_asyncio.AsyncIOMotorClient(uri)
        self.db = self.client[db_name]
        self.collection = self.db[collection_name]

    async def create_text_index(self):
        result = await self.collection.create_index([("description", "text")])
        print("Indice di testo creato:", result)

    def close(self):
        self.client.close()

# Uso
async def main():
    db_connection = MongoDBConnection('mongodb://localhost:27017/', 'testdb', 'products')
    await db_connection.create_text_index()
    db_connection.close()

asyncio.run(main())