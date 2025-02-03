# Utilizzare un thread per monitorare lo stato di un'altra variabile modificata nel programma principale.

import threading
import time

stop_thread = False

def monitor_status():
    while not stop_thread:
        print("Monitoraggio in corso...")
        time.sleep(1)
    print("Monitoraggio terminato.")

thread = threading.Thread(target=monitor_status)
thread.start()

# Simula altre operazioni
time.sleep(5)
stop_thread = True

thread.join()