# Scrivere uno script per recuperare record con condizioni specifiche usando PyMySQL.


import pymysql

def fetch_conditional_records():
    connection = pymysql.connect(host='localhost', user='user', password='password', database='testdb')
    cursor = connection.cursor()
    query = "SELECT name, position FROM employees WHERE position = 'Data Scientist'"
    cursor.execute(query)
    results = cursor.fetchall()
    for row in results:
        print("Dipendente:", row)
    cursor.close()
    connection.close()

fetch_conditional_records()