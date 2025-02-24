# Leggere un singolo documento da una collezione utilizzando motor.

import motor.motor_asyncio
import asyncio

async def read_single_document():
    client = motor.motor_asyncio.AsyncIOMotorClient('mongodb://localhost:27017/')
    db = client['testdb']
    collection = db['employees']
    document = await collection.find_one({"name": "Jane Doe"})
    print("Documento trovato:", document)
    client.close()

# Uso
asyncio.run(read_single_document())