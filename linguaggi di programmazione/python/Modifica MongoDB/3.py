# Aggiornare un singolo documento in una collezione utilizzando motor.

import motor.motor_asyncio
import asyncio

async def update_single_document():
    client = motor.motor_asyncio.AsyncIOMotorClient('mongodb://localhost:27017/')
    db = client['testdb']
    collection = db['employees']
    result = await collection.update_one({"name": "Jane Doe"}, {"$set": {"position": "Lead Analyst"}})
    print("Documenti modificati:", result.modified_count)
    client.close()

# Uso
asyncio.run(update_single_document())