# Inserire un singolo documento utilizzando motor con gestione delle eccezioni.

import motor.motor_asyncio
import asyncio

async def insert_single_document():
    client = motor.motor_asyncio.AsyncIOMotorClient('mongodb://localhost:27017/')
    db = client['testdb']
    collection = db['employees']
    document = {"name": "Hank Moody", "position": "Writer"}
    try:
        result = await collection.insert_one(document)
        print("Documento inserito con ID:", result.inserted_id)
    except Exception as e:
        print("Errore nell'inserimento:", e)
    finally:
        client.close()

# Uso
asyncio.run(insert_single_document())