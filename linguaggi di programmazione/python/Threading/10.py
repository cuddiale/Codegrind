# Creare un programma che utilizza i thread per stampare alternativamente "Ping" e "Pong".

import threading
import time

def ping():
    while True:
        time.sleep(1)
        print("Ping")

def pong():
    while True:
        time.sleep(1)
        print("Pong")

thread_ping = threading.Thread(target=ping)
thread_pong = threading.Thread(target=pong)

thread_ping.start()
thread_pong.start()

thread_ping.join(timeout=5)
thread_pong.join(timeout=5)

thread_ping._stop()
thread_pong._stop()

print("Ping Pong terminato.")