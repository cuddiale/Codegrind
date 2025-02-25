# Eliminare un singolo documento da una collezione utilizzando motor.

import motor.motor_asyncio
import asyncio

async def delete_single_document():
    client = motor.motor_asyncio.AsyncIOMotorClient('mongodb://localhost:27017/')
    db = client['testdb']
    collection = db['employees']
    result = await collection.delete_one({"name": "Jane Doe"})
    print("Documenti eliminati:", result.deleted_count)
    client.close()

# Uso
asyncio.run(delete_single_document())