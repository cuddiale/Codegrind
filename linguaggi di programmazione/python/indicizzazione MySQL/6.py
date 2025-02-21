# Creare un indice Full-Text su una colonna utilizzando PyMySQL in modalità OOP.

import pymysql

class FullTextIndexDatabase:
    def __init__(self):
        self.connection = pymysql.connect(host='localhost', user='user', password='password', database='testdb')

    def create_fulltext_index(self):
        try:
            with self.connection.cursor() as cursor:
                cursor.execute("CREATE FULLTEXT INDEX idx_fulltext_description ON products (description)")
                self.connection.commit()
                print("Indice Full-Text creato con successo")
        except pymysql.Error as error:
            print("Errore nella creazione dell'indice Full-Text:", error)

    def close(self):
        self.connection.close()

db = FullTextIndexDatabase()
db.create_fulltext_index()
db.close()