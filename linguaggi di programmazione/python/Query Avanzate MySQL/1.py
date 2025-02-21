# Eseguire un join complesso tra tre tabelle utilizzando mysql-connector-python.

import mysql.connector

def complex_join():
    connection = mysql.connector.connect(host='localhost', user='user', password='password', database='testdb')
    cursor = connection.cursor()
    query = """
    SELECT o.order_id, c.customer_name, p.product_name
    FROM orders o
    JOIN customers c ON o.customer_id = c.customer_id
    JOIN products p ON o.product_id = p.product_id
    """
    cursor.execute(query)
    results = cursor.fetchall()
    for row in results:
        print(row)
    cursor.close()
    connection.close()

complex_join()