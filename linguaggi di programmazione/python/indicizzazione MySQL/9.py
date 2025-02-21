# Rinominare un indice esistente su una tabella utilizzando PyMySQL.

import pymysql

def rename_index():
    connection = pymysql.connect(host='localhost', user='user', password='password', database='testdb')
    cursor = connection.cursor()
    try:
        cursor.execute("ALTER TABLE employees RENAME INDEX idx_employee_name TO idx_name")
        connection.commit()
        print("Indice rinominato con successo")
    except pymysql.Error as error:
        print("Errore nella ridenominazione dell'indice:", error)
    finally:
        cursor.close()
        connection.close()

rename_index()