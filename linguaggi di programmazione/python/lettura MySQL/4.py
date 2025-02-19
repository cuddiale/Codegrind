# Utilizzare mysql-connector-python per recuperare tutti i record da una tabella in modalità OOP.

import mysql.connector

class EmployeeDatabase:
    def __init__(self):
        self.connection = mysql.connector.connect(host='localhost', user='user', password='password', database='testdb')

    def fetch_all_employees(self):
        cursor = self.connection.cursor()
        cursor.execute("SELECT * FROM employees")
        results = cursor.fetchall()
        for row in results:
            print("Dipendente:", row)
        cursor.close()

    def close(self):
        self.connection.close()

db = EmployeeDatabase()
db.fetch_all_employees()
db.close()