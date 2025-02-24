# Leggere un numero limitato di documenti da una collezione utilizzando motor.

import motor.motor_asyncio
import asyncio

async def read_limited_documents():
    client = motor.motor_asyncio.AsyncIOMotorClient('mongodb://localhost:27017/')
    db = client['testdb']
    collection = db['employees']
    cursor = collection.find({}).limit(2)
    async for document in cursor:
        print("Documento trovato:", document)
    client.close()

# Uso
asyncio.run(read_limited_documents())