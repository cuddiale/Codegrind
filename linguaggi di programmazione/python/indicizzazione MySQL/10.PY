# Creare un indice su una tabella esistente utilizzando mysql-connector-python in modalità OOP.

import mysql.connector

class IndexCreationDatabase:
    def __init__(self):
        self.connection = mysql.connector.connect(host='localhost', user='user', password='password', database='testdb')

    def create_index(self, table_name, column_name, index_name):
        cursor = self.connection.cursor()
        try:
            query = f"CREATE INDEX {index_name} ON {table_name} ({column_name})"
            cursor.execute(query)
            self.connection.commit()
            print(f"Indice {index_name} creato su {column_name}")
        except mysql.connector.Error as error:
            print("Errore nella creazione dell'indice:", error)
        finally:
            cursor.close()

    def close(self):
        self.connection.close()

db = IndexCreationDatabase()
db.create_index('employees', 'email', 'idx_email')
db.close()