# Eseguire un'aggregazione con proiezione per mostrare solo i campi necessari utilizzando motor e OOP.

import motor.motor_asyncio
import asyncio

class MongoDBConnection:
    def __init__(self, uri, db_name, collection_name):
        self.client = motor.motor_asyncio.AsyncIOMotorClient(uri)
        self.db = self.client[db_name]
        self.collection = self.db[collection_name]

    async def aggregate_with_projection(self):
        pipeline = [
            {"$group": {"_id": "$department", "average_salary": {"$avg": "$salary"}}},
            {"$project": {"department": "$_id", "average_salary": 1, "_id": 0}}
        ]
        async for doc in self.collection.aggregate(pipeline):
            print(doc)

    def close(self):
        self.client.close()

# Uso
async def main():
    db_connection = MongoDBConnection('mongodb://localhost:27017/', 'testdb', 'employees')
    await db_connection.aggregate_with_projection()
    db_connection.close()

asyncio.run(main())