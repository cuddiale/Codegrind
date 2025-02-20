# Eliminare un singolo record da una tabella utilizzando mysql-connector-python.

import mysql.connector

def delete_single_data():
    connection = mysql.connector.connect(host='localhost', user='user', password='password', database='testdb')
    cursor = connection.cursor()
    query = "DELETE FROM employees WHERE employee_id = %s"
    employee_id = (1,)
    cursor.execute(query, employee_id)
    connection.commit()
    print("Record eliminato con successo")
    cursor.close()
    connection.close()

delete_single_data()