# Utilizzare una classe in mysql-connector-python per gestire l'inserimento di più record.

import mysql.connector

class MultiInsertDatabase:
    def __init__(self):
        self.connection = mysql.connector.connect(host='localhost', user='user', password='password', database='testdb')

    def insert_multiple(self, data):
        cursor = self.connection.cursor()
        cursor.executemany("INSERT INTO employees (name, position) VALUES (%s, %s)", data)
        self.connection.commit()
        print(f"{cursor.rowcount} record inseriti con successo")
        cursor.close()

    def close(self):
        self.connection.close()

data = [
    ("George Orwell", "Writer"),
    ("Aldous Huxley", "Philosopher")
]
db = MultiInsertDatabase()
db.insert_multiple(data)
db.close()