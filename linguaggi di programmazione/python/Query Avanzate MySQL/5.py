# Utilizzare una query finestra (window query) per calcolare un valore cumulativo con mysql-connector-python.

import mysql.connector

def window_query():
    connection = mysql.connector.connect(host='localhost', user='user', password='password', database='testdb')
    cursor = connection.cursor()
    query = """
    SELECT order_id, customer_id, total_amount,
           SUM(total_amount) OVER (PARTITION BY customer_id ORDER BY order_date) AS cumulative_total
    FROM orders
    """
    cursor.execute(query)
    results = cursor.fetchall()
    for row in results:
        print(row)
    cursor.close()
    connection.close()

window_query()