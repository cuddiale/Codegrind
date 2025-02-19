# Scrivere uno script per eseguire una query aggregata (es. COUNT, MAX) usando PyMySQL.

import pymysql

def fetch_aggregate_data():
    connection = pymysql.connect(host='localhost', user='user', password='password', database='testdb')
    cursor = connection.cursor()
    query = "SELECT COUNT(*) FROM employees WHERE position = 'Developer'"
    cursor.execute(query)
    count = cursor.fetchone()
    print("Numero di sviluppatori:", count[0])
    cursor.close()
    connection.close()

fetch_aggregate_data()