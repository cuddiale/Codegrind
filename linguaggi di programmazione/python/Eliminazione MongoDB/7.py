# Eliminare documenti con una condizione specifica utilizzando motor.

import motor.motor_asyncio
import asyncio

async def delete_conditional_documents():
    client = motor.motor_asyncio.AsyncIOMotorClient('mongodb://localhost:27017/')
    db = client['testdb']
    collection = db['employees']
    result = await collection.delete_many({"age": {"$gte": 60}})
    print("Documenti eliminati:", result.deleted_count)
    client.close()

# Uso
asyncio.run(delete_conditional_documents())