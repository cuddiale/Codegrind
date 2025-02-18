# Utilizzare mysql-connector-python per inserire più record in modalità OOP.

import mysql.connector

class MySQLDatabase:
    def __init__(self):
        self.connection = mysql.connector.connect(host='localhost', user='user', password='password', database='testdb')

    def insert_products(self):
        products = [
            ("Table", 200.00),
            ("Chair", 150.50),
            ("Lamp", 89.99)
        ]
        cursor = self.connection.cursor()
        cursor.executemany("INSERT INTO products (name, price) VALUES (%s, %s)", products)
        self.connection.commit()
        print(f"{cursor.rowcount} prodotti inseriti con successo")
        cursor.close()

    def close(self):
        self.connection.close()

db = MySQLDatabase()
db.insert_products()
db.close()