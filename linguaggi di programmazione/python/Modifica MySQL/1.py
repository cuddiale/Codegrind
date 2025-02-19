# Modificare un singolo record in una tabella utilizzando mysql-connector-python.


import mysql.connector

def update_single_record():
    connection = mysql.connector.connect(host='localhost', user='user', password='password', database='testdb')
    cursor = connection.cursor()
    query = "UPDATE employees SET position = %s WHERE employee_id = %s"
    data = ("Senior Developer", 1)
    cursor.execute(query, data)
    connection.commit()
    print("Record aggiornato con successo")
    cursor.close()
    connection.close()

update_single_record()