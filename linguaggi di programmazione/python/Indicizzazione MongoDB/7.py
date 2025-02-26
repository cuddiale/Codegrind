# Creare un indice geospaziale sul campo "location" utilizzando motor. Questo indice permette ricerche basate sulla posizione geografica.

import motor.motor_asyncio
import asyncio

async def create_geospatial_index():
    client = motor.motor_asyncio.AsyncIOMotorClient('mongodb://localhost:27017/')
    db = client['testdb']
    collection = db['places']
    result = await collection.create_index([("location", "2dsphere")])
    print("Indice geospaziale creato:", result)
    client.close()

# Uso
asyncio.run(create_geospatial_index())