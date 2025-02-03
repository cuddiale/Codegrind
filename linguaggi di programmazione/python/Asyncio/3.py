# Implementare un task asincrono che esegue un countdown da 10 a 1 e stampa "Fine!" al termine.

import asyncio

async def countdown():
    for i in range(10, 0, -1):
        print(i)
        await asyncio.sleep(1)
    print("Fine!")

async def main():
    await countdown()

asyncio.run(main())