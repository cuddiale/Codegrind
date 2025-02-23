# Utilizzare una funzione di finestra per calcolare il ranking dei record con PyMySQL in modalità OOP.

import pymysql

class WindowFunctionDatabase:
    def __init__(self):
        self.connection = pymysql.connect(host='localhost', user='user', password='password', database='testdb')

    def window_function_query(self):
        try:
            with self.connection.cursor() as cursor:
                query = """
                SELECT order_id, customer_id, total_amount,
                       RANK() OVER (PARTITION BY customer_id ORDER BY total_amount

 DESC) AS rank
                FROM orders
                """
                cursor.execute(query)
                results = cursor.fetchall()
                for row in results:
                    print(row)
        except pymysql.Error as error:
            print("Errore nella funzione di finestra:", error)

    def close(self):
        self.connection.close()

db = WindowFunctionDatabase()
db.window_function_query()
db.close()