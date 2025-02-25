# Eliminare più documenti da una collezione utilizzando motor e OOP.

import motor.motor_asyncio
import asyncio

class MongoDBConnection:
    def __init__(self, uri, db_name, collection_name):
        self.client = motor.motor_asyncio.AsyncIOMotorClient(uri)
        self.db = self.client[db_name]
        self.collection = self.db[collection_name]

    async def delete_multiple_documents(self, query):
        result = await self.collection.delete_many(query)
        print("Documenti eliminati:", result.deleted_count)

    def close(self):
        self.client.close()

# Uso
async def main():
    db_connection = MongoDBConnection('mongodb://localhost:27017/', 'testdb', 'employees')
    await db_connection.delete_multiple_documents({"position": "Contractor"})
    db_connection.close()

asyncio.run(main())