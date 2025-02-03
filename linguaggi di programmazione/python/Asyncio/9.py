# Usare asyncio per implementare un semplice echo server che ascolta su una porta TCP.

import asyncio

async def handle_client(reader, writer):
    data = await reader.read(100)
    message = data.decode()
    addr = writer.get_extra_info('peername')
    print(f"Ricevuto {message} da {addr}")
    writer.write(data)
    await writer.drain()
    writer.close()

async def main():
    server = await asyncio.start_server(handle_client, '127.0.0.1', 8888)
    addr = server.sockets[0].getsockname()
    print(f'Servendo su {addr}')

    async with server:
        await server.serve_forever()

asyncio.run(main())