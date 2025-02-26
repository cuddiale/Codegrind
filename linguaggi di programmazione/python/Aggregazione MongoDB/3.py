# Eseguire un'aggregazione semplice per calcolare il totale delle vendite utilizzando motor.

import motor.motor_asyncio
import asyncio

async def aggregate_total_sales():
    client = motor.motor_asyncio.AsyncIOMotorClient('mongodb://localhost:27017/')
    db = client['testdb']
    collection = db['sales']
    pipeline = [
        {"$group": {"_id": None, "total_sales": {"$sum": "$amount"}}}
    ]
    async for doc in collection.aggregate(pipeline):
        print("Totale delle vendite:", doc["total_sales"])
    client.close()

# Uso
asyncio.run(aggregate_total_sales())