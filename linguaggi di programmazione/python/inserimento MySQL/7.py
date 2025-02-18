# Creare una classe per inserire un singolo record in una tabella usando PyMySQL.

import pymysql

class EmployeeDatabase:
    def __init__(self):
        self.connection = pymysql.connect(host='localhost', user='user', password='password', database='testdb')

    def insert_employee(self, name, position):
        cursor = self.connection.cursor()
        cursor.execute("INSERT INTO employees (name, position) VALUES (%s, %s)", (name, position))
        self.connection.commit()
        print("Dipendente inserito con successo")
        cursor.close()

    def close(self):
        self.connection.close()

db = EmployeeDatabase()
db.insert_employee("Jane Doe", "Analyst")
db.close()