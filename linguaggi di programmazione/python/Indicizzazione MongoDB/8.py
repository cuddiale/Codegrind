# Creare un indice hash sul campo "user_id" utilizzando motor. Questo indice migliorerà le prestazioni delle query che cercano un valore specifico di "user_id".

import motor.motor_asyncio
import asyncio

class MongoDBConnection:
    def __init__(self, uri, db_name, collection_name):
        self.client = motor.motor_asyncio.AsyncIOMotorClient(uri)
        self.db = self.client[db_name]
        self.collection = self.db[collection_name]

    async def create_hashed_index(self):
        result = await self.collection.create_index([("user_id", "hashed")])
        print("Indice hash creato:", result)

    def close(self):
        self.client.close()

# Uso
async def main():
    db_connection = MongoDBConnection('mongodb://localhost:27017/', 'testdb', 'users')
    await db_connection.create_hashed_index()
    db_connection.close()

asyncio.run(main())