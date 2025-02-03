# Creare un processo che esegue un'operazione matematica semplice e utilizza una Pipe per inviare il risultato al processo principale.

from multiprocessing import Process, Pipe

def calculate_sum(conn):
    total = sum(range(1, 11))
    conn.send(total)
    conn.close()

if __name__ == '__main__':
    parent_conn, child_conn = Pipe()
    process = Process(target=calculate_sum, args=(child_conn,))
    process.start()
    print("La somma è:", parent_conn.recv())
    process.join()