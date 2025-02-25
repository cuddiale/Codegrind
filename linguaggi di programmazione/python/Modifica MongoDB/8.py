# Aggiornare un documento incrementando un valore numerico utilizzando motor e OOP.

import motor.motor_asyncio
import asyncio

class MongoDBConnection:
    def __init__(self, uri, db_name, collection_name):
        self.client = motor.motor_asyncio.AsyncIOMotorClient(uri)
        self.db = self.client[db_name]
        self.collection = self.db[collection_name]

    async def increment_field(self, query, field, increment_value):
        result = await self.collection.update_one(query, {"$inc": {field: increment_value}})
        print("Documenti modificati:", result.modified_count)

    def close(self):
        self.client.close()

# Uso
async def main():
    db_connection = MongoDBConnection('mongodb://localhost:27017/', 'testdb', 'employees')
    await db_connection.increment_field({"name": "Bob Johnson"}, "years_of_experience", 1)
    db_connection.close()

asyncio.run(main())