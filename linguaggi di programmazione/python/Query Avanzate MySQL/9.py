# Utilizzare una funzione aggregata in una query con join utilizzando mysql-connector-python.

import mysql.connector

def join_with_aggregate():
    connection = mysql.connector.connect(host='localhost', user='user', password='password', database='testdb')
    cursor = connection.cursor()
    query = """
    SELECT c.customer_name, SUM(o.total_amount) AS total_spent
    FROM customers c
    JOIN orders o ON c.customer_id = o.customer_id
    GROUP BY c.customer_name
    """
    cursor.execute(query)
    results = cursor.fetchall()
    for row in results:
        print(row)
    cursor.close()
    connection.close()

join_with_aggregate()