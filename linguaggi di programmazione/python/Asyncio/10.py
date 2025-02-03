# Creare un programma asincrono che attende la terminazione di più task asincroni, usando `asyncio.wait` con un timeout.

import asyncio

async def task(name, time_to_sleep):
    await asyncio.sleep(time_to_sleep)
    print(f"Task {name} completato")

async def main():
    tasks = [task(f"Task {i}", i) for i in range(1, 4)]
    done, pending = await asyncio.wait(tasks, timeout=2)
    for task in done:
        print(f"{task.get_name()} finito")
    for task in pending:
        print(f"{task.get_name()} non finito e cancellato")
        task.cancel()

asyncio.run(main())