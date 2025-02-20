# Utilizzare mysql-connector-python per modificare più record in modalità OOP.

import mysql.connector

class ProductDatabase:
    def __init__(self):
        self.connection = mysql.connector.connect(host='localhost', user='user', password='password', database='testdb')

    def update_product_prices(self):
        products = [
            (19.99, "Coffee"),
            (25.00, "Tea")
        ]
        cursor = self.connection.cursor()
        cursor.executemany("UPDATE products SET price = %s WHERE name = %s", products)
        self.connection.commit()
        print(f"{cursor.rowcount} prezzi aggiornati con successo")
        cursor.close()

    def close(self):
        self.connection.close()

db = ProductDatabase()
db.update_product_prices()
db.close()