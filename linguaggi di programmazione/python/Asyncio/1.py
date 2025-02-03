# Creare un'attività asincrona che stampa i numeri da 1 a 10 con un intervallo di un secondo tra ciascuno.

import asyncio

async def print_numbers():
    for i in range(1, 11):
        print(i)
        await asyncio.sleep(1)

async def main():
    await print_numbers()

asyncio.run(main())