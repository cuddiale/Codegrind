# Eliminare più record contemporaneamente da una tabella utilizzando PyMySQL e OOP.

import pymysql

class Database:
    def __init__(self):
        self.connection = pymysql.connect(host='localhost', user='user', password='password', database='testdb')

    def delete_multiple_data(self):
        with self.connection.cursor() as cursor:
            query = "DELETE FROM employees WHERE position = %s"
            position = ("Intern",)
            cursor.execute(query, position)
            self.connection.commit()
            print(f"{cursor.rowcount} record eliminati con successo")

    def close(self):
        self.connection.close()

db = Database()
db.delete_multiple_data()
db.close()