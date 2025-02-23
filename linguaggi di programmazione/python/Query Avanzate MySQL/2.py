# Utilizzare una subquery per recuperare dati specifici con PyMySQL in modalità OOP

import pymysql

class Database:
    def __init__(self):
        self.connection = pymysql.connect(host='localhost', user='user', password='password', database='testdb')

    def subquery_example(self):
        try:
            with self.connection.cursor() as cursor:
                query = """
                SELECT c.customer_name, c.customer_id
                FROM customers c
                WHERE c.customer_id IN (SELECT o.customer_id FROM orders o WHERE o.total_amount > 100)
                """
                cursor.execute(query)
                results = cursor.fetchall()
                for row in results:
                    print(row)
        except pymysql.Error as error:
            print("Errore nella subquery:", error)

    def close(self):
        self.connection.close()

db = Database()
db.subquery_example()
db.close()