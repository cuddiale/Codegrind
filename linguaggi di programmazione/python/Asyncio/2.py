# Scrivere un programma che avvia due task asincroni; uno stampa numeri pari e l'altro numeri dispari fino a 10.

import asyncio

async def print_even():
    for i in range(2, 11, 2):
        print(f"Pari: {i}")
        await asyncio.sleep(1)

async def print_odd():
    for i in range(1, 11, 2):
        print(f"Dispari: {i}")
        await asyncio.sleep(1)

async def main():
    task1 = asyncio.create_task(print_even())
    task2 = asyncio.create_task(print_odd())
    await task1
    await task2

asyncio.run(main())