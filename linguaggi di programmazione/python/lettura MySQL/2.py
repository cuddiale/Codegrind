# Recuperare più record contemporaneamente da una tabella utilizzando PyMySQL e OOP.

import pymysql

class Database:
    def __init__(self):
        self.connection = pymysql.connect(host='localhost', user='user', password='password', database='testdb')

    def fetch_multiple_data(self):
        with self.connection.cursor() as cursor:
            query = "SELECT name, position FROM employees"
            cursor.execute(query)
            results = cursor.fetchall()
            for row in results:
                print("Dipendente:", row)

    def close(self):
        self.connection.close()

db = Database()
db.fetch_multiple_data()
db.close()