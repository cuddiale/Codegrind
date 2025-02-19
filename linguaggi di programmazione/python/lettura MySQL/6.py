# Utilizzare mysql-connector-python per recuperare i record da più tabelle in modalità OOP.

import mysql.connector

class ProductDatabase:
    def __init__(self):
        self.connection = mysql.connector.connect(host='localhost', user='user', password='password', database='testdb')

    def fetch_products_and_suppliers(self):
        cursor = self.connection.cursor()
        query = """
        SELECT p.name, s.name
        FROM products p
        JOIN suppliers s ON p.supplier_id = s.supplier_id
        """
        cursor.execute(query)
        results = cursor.fetchall()
        for row in results:
            print("Prodotto e fornitore:", row)
        cursor.close()

    def close(self):
        self.connection.close()

db = ProductDatabase()
db.fetch_products_and_suppliers()
db.close()