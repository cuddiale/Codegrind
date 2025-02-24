# Inserire un singolo documento in una collezione utilizzando motor.

import motor.motor_asyncio
import asyncio

async def insert_single_document():
    client = motor.motor_asyncio.AsyncIOMotorClient('mongodb://localhost:27017/')
    db = client['testdb']
    collection = db['employees']
    document = {"name": "Jane Doe", "position": "Analyst"}
    result = await collection.insert_one(document)
    print("Documento inserito con ID:", result.inserted_id)
    client.close()

# Uso
asyncio.run(insert_single_document())