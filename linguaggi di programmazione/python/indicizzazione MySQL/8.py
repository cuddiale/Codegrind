# Verificare l'esistenza di un indice specifico su una tabella utilizzando mysql-connector-python in modalità OOP.

import mysql.connector

class IndexCheckDatabase:
    def __init__(self):
        self.connection = mysql.connector.connect(host='localhost', user='user', password='password', database='testdb')

    def check_index(self, index_name):
        cursor = self.connection.cursor()
        try:
            cursor.execute("SHOW INDEXES FROM employees WHERE Key_name = %s", (index_name,))
            index = cursor.fetchone()
            if index:
                print(f"Indice {index_name} esiste")
            else:
                print(f"Indice {index_name} non esiste")
        except mysql.connector.Error as error:
            print("Errore nella verifica dell'indice:", error)
        finally:
            cursor.close()

    def close(self):
        self.connection.close()

db = IndexCheckDatabase()
db.check_index('idx_employee_name')
db.close()