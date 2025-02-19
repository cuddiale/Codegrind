# Modificare più record contemporaneamente in una tabella utilizzando PyMySQL e OOP.

import pymysql

class Database:
    def __init__(self):
        self.connection = pymysql.connect(host='localhost', user='user', password='password', database='testdb')

    def update_multiple_records(self):
        with self.connection.cursor() as cursor:
            query = "UPDATE employees SET position = %s WHERE employee_id = %s"
            data = [
                ("Manager", 2),
                ("Director", 3)
            ]
            cursor.executemany(query, data)
            self.connection.commit()
            print(f"{cursor.rowcount} record aggiornati con successo")

    def close(self):
        self.connection.close()

db = Database()
db.update_multiple_records()
db.close()