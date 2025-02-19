# Recuperare dettagli da una tabella filtrando i risultati in base a una condizione specifica usando mysql-connector-python.

import mysql.connector

def fetch_detailed_records():
    connection = mysql.connector.connect(host='localhost', user='user', password='password', database='testdb')
    cursor = connection.cursor()
    query = "SELECT name, hire_date FROM employees WHERE year(hire_date) > 2010"
    cursor.execute(query)
    results = cursor.fetchall()
    for result in results:
        print("Dipendente:", result)
    cursor.close()
    connection.close()

fetch_detailed_records()