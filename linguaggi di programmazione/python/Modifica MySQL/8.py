# Modificare tutti i record di una tabella utilizzando mysql-connector-python.

import mysql.connector

def update_all_records():
    connection = mysql.connector.connect(host='localhost', user='user', password='password', database='testdb')
    cursor = connection.cursor()
    cursor.execute("UPDATE employees SET bonus = bonus * 1.1")
    connection.commit()
    print(f"{cursor.rowcount} record aggiornati con successo")
    cursor.close()
    connection.close()

update_all_records()