# Implementare una funzione asincrona che esegue un task che può essere cancellato esternamente dopo un certo tempo.


import asyncio

async def cancellable_task():
    try:
        while True:
            print("Esecuzione...")
            await asyncio.sleep(1)
    except asyncio.CancelledError:
        print("Task cancellato")

async def main():
    task = asyncio.create_task(cancellable_task())
    await asyncio.sleep(5)  # Permette al task di eseguire per un po'
    task.cancel()
    await task

asyncio.run(main())