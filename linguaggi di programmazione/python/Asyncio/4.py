# Creare un task asincrono che calcola la somma di un range di numeri e poi stampa il risultato.

import asyncio

async def calculate_sum():
    total = sum(range(1, 1001))
    await asyncio.sleep(2)  # Simulazione di un'operazione lunga
    print(f"La somma è: {total}")

async def main():
    await calculate_sum()

asyncio.run(main())