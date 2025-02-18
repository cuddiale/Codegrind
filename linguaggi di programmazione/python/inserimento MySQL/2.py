# Inserire più record contemporaneamente in una tabella utilizzando PyMySQL e OOP.

import pymysql

class Database:
    def __init__(self):
        self.connection = pymysql.connect(host='localhost', user='user', password='password', database='testdb')

    def insert_multiple_data(self):
        with self.connection.cursor() as cursor:
            query = "INSERT INTO employees (name, position) VALUES (%s, %s)"
            employees = [
                ("Alice Smith", "Data Scientist"),
                ("Bob Johnson", "Project Manager")
            ]
            cursor.executemany(query, employees)
            self.connection.commit()
            print(f"{cursor.rowcount} records inseriti con successo")

    def close(self):
        self.connection.close()

db = Database()
db.insert_multiple_data()
db.close()