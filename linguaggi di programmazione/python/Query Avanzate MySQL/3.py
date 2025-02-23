# Utilizzare un CTE (Common Table Expression) per semplificare una query complessa con mysql-connector-python.

import mysql.connector

def use_cte():
    connection = mysql.connector.connect(host='localhost', user='user', password='password', database='testdb')
    cursor = connection.cursor()
    query = """
    WITH OrderCTE AS (
        SELECT customer_id, SUM(total_amount) AS total_spent
        FROM orders
        GROUP BY customer_id
    )
    SELECT c.customer_name, o.total_spent
    FROM customers c
    JOIN OrderCTE o ON c.customer_id = o.customer_id
    """
    cursor.execute(query)
    results = cursor.fetchall()
    for row in results:
        print(row)
    cursor.close()
    connection.close()

use_cte()