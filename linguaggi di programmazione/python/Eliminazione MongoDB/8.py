# Eliminare un documento utilizzando un indice specifico con motor e OOP.

import motor.motor_asyncio
import asyncio
from bson.objectid import ObjectId

class MongoDBConnection:
    def __init__(self, uri, db_name, collection_name):
        self.client = motor.motor_asyncio.AsyncIOMotorClient(uri)
        self.db = self.client[db_name]
        self.collection = self.db[collection_name]

    async def delete_document_by_id(self, document_id):
        result = await self.collection.delete_one({"_id": document_id})
        print("Documenti eliminati:", result.deleted_count)

    def close(self):
        self.client.close()

# Uso
async def main():
    db_connection = MongoDBConnection('mongodb://localhost:27017/', 'testdb', 'employees')
    await db_connection.delete_document_by_id(ObjectId("64b61ec69c77c5c3f1a267c9"))
    db_connection.close()

asyncio.run(main())