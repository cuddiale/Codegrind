# Scrivere un programma con asyncio che gestisce un timer che scatta ogni 5 secondi, stampando "Timer scattato!".

import asyncio

async def timer():
    while True:
        await asyncio.sleep(5)
        print("Timer scattato!")

async def main():
    await timer()

asyncio.run(main())