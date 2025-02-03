# Utilizzare un processo per monitorare lo stato di un'altra variabile modificata nel programma principale attraverso un Manager.

from multiprocessing import Process, Manager

def monitor_status(d):
    while d['run']:
        print("Monitoraggio in corso...")
        time.sleep(1)
    print("Monitoraggio terminato.")

if __name__ == '__main__':
    with Manager() as manager:
        d = manager.dict()
        d['run'] = True
        process = Process(target=monitor_status, args=(d,))
        process.start()

        time.sleep(5)
        d['run'] = False

        process.join()