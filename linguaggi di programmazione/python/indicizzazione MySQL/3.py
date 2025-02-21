# Scrivere uno script per creare un indice unico su una colonna utilizzando PyMySQL.

import pymysql

def create_unique_index():
    connection = pymysql.connect(host='localhost', user='user', password='password', database='testdb')
    cursor = connection.cursor()
    try:
        cursor.execute("CREATE UNIQUE INDEX idx_unique_email ON employees (email)")
        connection.commit()
        print("Indice unico creato con successo")
    except pymysql.Error as error:
        print("Errore nella creazione dell'indice unico:", error)
    finally:
        cursor.close()
        connection.close()

create_unique_index()