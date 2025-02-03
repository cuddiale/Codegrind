# Utilizzare asyncio per eseguire una funzione che simula il download di file da diverse URL in modo asincrono.

import asyncio
import random

async def download_file(url):
    print(f"Inizio download da {url}")
    await asyncio.sleep(random.randint(1, 3))  # Simula un tempo di download variabile
    print(f"Download completato da {url}")

async def main():
    urls = ['http://example.com/a', 'http://example.com/b', 'http://example.com/c']
    tasks = [asyncio.create_task(download_file(url)) for url in urls]
    await asyncio.gather(*tasks)

asyncio.run(main())