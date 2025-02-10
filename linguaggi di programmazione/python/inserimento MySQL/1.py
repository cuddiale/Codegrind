# Inserire un singolo record in una tabella utilizzando mysql-connector-python.

import mysql.connector

def insert_data():
    connection = mysql.connector.connect(host='localhost', user='user', password='password', database='testdb')
    cursor = connection.cursor()
    query = "INSERT INTO employees (name, position) VALUES (%s, %s)"
    data = ("John Doe", "Software Engineer")
    cursor.execute(query, data)
    connection.commit()
    print("Record inserito con successo")
    cursor.close()
    connection.close()

insert_data()