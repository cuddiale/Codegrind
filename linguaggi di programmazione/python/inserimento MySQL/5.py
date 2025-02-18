# Creare una classe per gestire l'inserimento di dati singoli con mysql-connector-python.

import mysql.connector

class ProductDatabase:
    def __init__(self):
        self.connection = mysql.connector.connect(host='localhost', user='user', password='password', database='testdb')

    def insert_product(self, name, price):
        cursor = self.connection.cursor()
        cursor.execute("INSERT INTO products (name, price) VALUES (%s, %s)", (name, price))
        self.connection.commit()
        print("Prodotto inserito con successo")
        cursor.close()

    def close(self):
        self.connection.close()

db = ProductDatabase()
db.insert_product("Desk", 400.75)
db.close()