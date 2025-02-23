# Creare una classe per gestire la connessione a un database MongoDB usando motor.

import motor.motor_asyncio

class MongoDBConnection:
    def __init__(self, uri, db_name):
        self.client = motor.motor_asyncio.AsyncIOMotorClient(uri)
        self.db = self.client[db_name]

    async def connect(self):
        print("Connessione al database:", self.db.name)

    async def close(self):
        self.client.close()
        print("Connessione chiusa.")

# Uso
import asyncio

async def main():
    db_connection = MongoDBConnection('mongodb://localhost:27017/', 'testdb')
    await db_connection.connect()
    await db_connection.close()

asyncio.run(main())