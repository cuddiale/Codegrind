# Utilizzare mysql-connector-python per eliminare più record in modalità OOP.

import mysql.connector

class ProductDatabase:
    def __init__(self):
        self.connection = mysql.connector.connect(host='localhost', user='user', password='password', database='testdb')

    def delete_products(self):
        cursor = self.connection.cursor()
        cursor.execute("DELETE FROM products WHERE quantity = 0")
        self.connection.commit()
        print(f"{cursor.rowcount} prodotti senza stock eliminati con successo")
        cursor.close()

    def close(self):
        self.connection.close()

db = ProductDatabase()
db.delete_products()
db.close()