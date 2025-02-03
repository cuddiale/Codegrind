# Creare una funzione asincrona che attende l'input dell'utente e poi stampa quello che è stato inserito.

import asyncio

async def get_input():
    result = await asyncio.to_thread(input, "Inserisci qualcosa: ")
    print(f"Hai inserito: {result}")

async def main():
    await get_input()

asyncio.run(main())