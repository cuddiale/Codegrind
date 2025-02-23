# Creare una query pivot per trasformare righe in colonne utilizzando PyMySQL in modalità OOP.

import pymysql

class PivotDatabase:
    def __init__(self):
        self.connection = pymysql.connect(host='localhost', user='user', password='password', database='testdb')

    def pivot_query(self):
        try:
            with self.connection.cursor() as cursor:
                query = """
                SELECT
                    customer_id,
                    MAX(CASE WHEN product_id = 1 THEN total_amount ELSE 0 END) AS product_1,
                    MAX(CASE WHEN product_id = 2 THEN total_amount ELSE 0 END) AS product_2,
                    MAX(CASE WHEN product_id = 3 THEN total_amount ELSE 0 END) AS product_3
                FROM orders
                GROUP BY customer_id
                """
                cursor.execute(query)
                results = cursor.fetchall()
                for row in results:
                    print(row)
        except pymysql.Error as error:
            print("Errore nella query pivot:", error)

    def close(self):
        self.connection.close()

db = PivotDatabase()
db.pivot_query()
db.close()