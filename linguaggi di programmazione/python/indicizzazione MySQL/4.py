# Utilizzare mysql-connector-python per creare un indice composito su più colonne in modalità OOP.

import mysql.connector

class CompositeIndexDatabase:
    def __init__(self):
        self.connection = mysql.connector.connect(host='localhost', user='user', password='password', database='testdb')

    def create_composite_index(self):
        cursor = self.connection.cursor()
        try:
            cursor.execute("CREATE INDEX idx_name_position ON employees (name, position)")
            self.connection.commit()
            print("Indice composito creato con successo")
        except mysql.connector.Error as error:
            print("Errore nella creazione dell'indice composito:", error)
        finally:
            cursor.close()

    def close(self):
        self.connection.close()

db = CompositeIndexDatabase()
db.create_composite_index()
db.close()