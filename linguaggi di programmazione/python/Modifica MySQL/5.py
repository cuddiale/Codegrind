# Modificare una specifica colonna di un record utilizzando mysql-connector-python.

import mysql.connector

def update_specific_column():
    connection = mysql.connector.connect(host='localhost', user='user', password='password', database='testdb')
    cursor = connection.cursor()
    query = "UPDATE employees SET position = %s WHERE name = %s"
    data = ("Team Lead", "John Doe")
    cursor.execute(query, data)
    connection.commit()
    print("Record aggiornato con successo")
    cursor.close()
    connection.close()

update_specific_column()