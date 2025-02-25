# Aggiornare documenti condizionati su un valore specifico utilizzando motor.

import motor.motor_asyncio
import asyncio

async def update_conditional_documents():
    client = motor.motor_asyncio.AsyncIOMotorClient('mongodb://localhost:27017/')
    db = client['testdb']
    collection = db['employees']
    result = await collection.update_many({"years_of_experience": {"$gt": 5}}, {"$set": {"senior": True}})
    print("Documenti modificati:", result.modified_count)
    client.close()

# Uso
asyncio.run(update_conditional_documents())