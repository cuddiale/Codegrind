# Utilizzare mysql-connector-python per eliminare tutti i record da una tabella in modalità OOP.

import mysql.connector

class CompleteDeleteDatabase:
    def __init__(self):
        self.connection = mysql.connector.connect(host='localhost', user='user', password='password', database='testdb')

    def delete_all(self, table_name):
        cursor = self.connection.cursor()
        query = f"DELETE FROM {table_name}"
        cursor.execute(query)
        self.connection.commit()
        print(f"Tutti i record dalla tabella {table_name} sono stati eliminati")
        cursor.close()

    def close(self):
        self.connection.close()

db = CompleteDeleteDatabase()
db.delete_all('temporary_data')
db.close()