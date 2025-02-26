# Creare un indice unico sul campo "email" utilizzando motor. Questo indice garantirà l'unicità dei valori di "email" nella collezione.

import motor.motor_asyncio
import asyncio

async def create_unique_index():
    client = motor.motor_asyncio.AsyncIOMotorClient('mongodb://localhost:27017/')
    db = client['testdb']
    collection = db['employees']
    result = await collection.create_index("email", unique=True)
    print("Indice unico creato:", result)
    client.close()

# Uso
asyncio.run(create_unique_index())