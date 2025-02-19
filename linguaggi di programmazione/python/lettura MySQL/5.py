# Recuperare una specifica colonna da una tabella utilizzando mysql-connector-python.

import mysql.connector

def fetch_specific_column():
    connection = mysql.connector.connect(host='localhost', user='user', password='password', database='testdb')
    cursor = connection.cursor()
    query = "SELECT position FROM employees"
    cursor.execute(query)
    positions = cursor.fetchall()
    print("Posizioni disponibili:")
    for position in positions:
        print(position)
    cursor.close()
    connection.close()

fetch_specific_column()