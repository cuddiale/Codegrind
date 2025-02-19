# Recuperare un singolo record da una tabella utilizzando mysq

import mysql.connector

def fetch_single_data():
    connection = mysql.connector.connect(host='localhost', user='user', password='password', database='testdb')
    cursor = connection.cursor()
    query = "SELECT name, position FROM employees WHERE employee_id = 1"
    cursor.execute(query)
    result = cursor.fetchone()
    print("Dati recuperati:", result)
    cursor.close()
    connection.close()

fetch_single_data()