# Utilizzare funzioni di aggregazione avanzate come GROUP_CONCAT con PyMySQL in modalità OOP.

import pymysql

class AggregationDatabase:
    def __init__(self):
        self.connection = pymysql.connect(host='localhost', user='user', password='password', database='testdb')

    def advanced_aggregation(self):
        try:
            with self.connection.cursor() as cursor:
                query = """
                SELECT c.customer_name, GROUP_CONCAT(p.product_name SEPARATOR ', ') AS products
                FROM customers c
                JOIN orders o ON c.customer_id = o.customer_id
                JOIN products p ON o.product_id = p.product_id
                GROUP BY c.customer_name
                """
                cursor.execute(query)
                results = cursor.fetchall()
                for row in results:
                    print(row)
        except pymysql.Error as error:
            print("Errore nell'aggregazione avanzata:", error)

    def close(self):
        self.connection.close()

db = AggregationDatabase()
db.advanced_aggregation()
db.close()