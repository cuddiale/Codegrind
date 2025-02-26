# Eseguire un'aggregazione con condizione per contare il numero di ordini per ogni cliente utilizzando motor e OOP.

import motor.motor_asyncio
import asyncio

class MongoDBConnection:
    def __init__(self, uri, db_name, collection_name):
        self.client = motor.motor_asyncio.AsyncIOMotorClient(uri)
        self.db = self.client[db_name]
        self.collection = self.db[collection_name]

    async def aggregate_count_by_customer(self):
        pipeline = [
            {"$group": {"_id": "$customer_id", "count": {"$sum": 1}}}
        ]
        async for doc in self.collection.aggregate(pipeline):
            print("Cliente ID:", doc["_id"], "Numero di ordini:", doc["count"])

    def close(self):
        self.client.close()

# Uso
async def main():
    db_connection = MongoDBConnection('mongodb://localhost:27017/', 'testdb', 'orders')
    await db_connection.aggregate_count_by_customer()
    db_connection.close()

asyncio.run(main())