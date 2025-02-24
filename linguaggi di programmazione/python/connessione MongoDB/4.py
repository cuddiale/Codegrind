# Stabilire una connessione a un database MongoDB usando motor.

import motor.motor_asyncio

async def connect_db():
    client = motor.motor_asyncio.AsyncIOMotorClient('mongodb://localhost:27017/')
    db = client['testdb']
    print("Connessione al database:", db.name)
    client.close()

# Uso
import asyncio
asyncio.run(connect_db())