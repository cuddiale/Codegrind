# Creare una classe per gestire la connessione asincrona a un database MySQL usando aiomysql.

import asyncio
import aiomysql

class AsyncMySQLConnection:
    async def connect(self):
        self.pool = await aiomysql.create_pool(host='127.0.0.1', port=3306,
                                               user='root', password='password',
                                               db='testdb', loop=asyncio.get_running_loop())
        print("Connessione stabilita:", self.pool)

    async def close(self):
        self.pool.close()
        await self.pool.wait_closed()
        print("Connessione chiusa.")

async def main():
    db = AsyncMySQLConnection()
    await db.connect()
    await db.close()

asyncio.run(main())