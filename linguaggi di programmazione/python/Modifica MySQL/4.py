# Utilizzare mysql-connector-python per modificare tutti i record in una tabella in modalità OOP.

import mysql.connector

class EmployeeDatabase:
    def __init__(self):
        self.connection = mysql.connector.connect(host='localhost', user='user', password='password', database='testdb')

    def update_all_employees(self):
        cursor = self.connection.cursor()
        cursor.execute("UPDATE employees SET active = %s", (0,))
        self.connection.commit()
        print(f"{cursor.rowcount} record aggiornati con successo")
        cursor.close()

    def close(self):
        self.connection.close()

db = EmployeeDatabase()
db.update_all_employees()
db.close()