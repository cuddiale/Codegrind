# Creare una classe per gestire la connessione asincrona a un database MongoDB usando motor e gestire le eccezioni.

import motor.motor_asyncio
import asyncio

class MongoDBConnection:
    def __init__(self, uri, db_name):
        self.client = motor.motor_asyncio.AsyncIOMotorClient(uri)
        self.db = self.client[db_name]

    async def connect(self):
        try:
            print("Connessione al database:", self.db.name)
        except Exception as e:
            print("Errore di connessione:", e)

    async def close(self):
        self.client.close()
        print("Connessione chiusa.")

# Uso
async def main():
    db_connection = MongoDBConnection('mongodb://localhost:27017/', 'testdb')
    await db_connection.connect()
    await db_connection.close()

asyncio.run(main())