# Eliminare un indice da una tabella utilizzando PyMySQL in modalità OOP.

import pymysql

class Database:
    def __init__(self):
        self.connection = pymysql.connect(host='localhost', user='user', password='password', database='testdb')

    def drop_index(self):
        try:
            with self.connection.cursor() as cursor:
                cursor.execute("DROP INDEX idx_employee_name ON employees")
                self.connection.commit()
                print("Indice eliminato con successo")
        except pymysql.Error as error:
            print("Errore nell'eliminazione dell'indice:", error)

    def close(self):
        self.connection.close()

db = Database()
db.drop_index()
db.close()