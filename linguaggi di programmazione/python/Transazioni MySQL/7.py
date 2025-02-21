# Gestire una transazione che coinvolge più tabelle utilizzando mysql-connector-python in modalità OOP.

import mysql.connector

class MultiTableTransaction:
    def __init__(self):
        self.connection = mysql.connector.connect(host='localhost', user='user', password='password', database='testdb', autocommit=False)

    def perform_transaction(self):
        cursor = self.connection.cursor()
        try:
            cursor.execute("UPDATE accounts SET balance = balance - 100 WHERE account_id = 1")
            cursor.execute("INSERT INTO transactions (account_id, amount) VALUES (1, -100)")
            self.connection.commit()
            print("Transazione su più tabelle completata con successo")
        except mysql.connector.Error as error:
            print("Errore nella transazione:", error)
            self.connection.rollback()
        finally:
            cursor.close()

    def close(self):
        self.connection.close()

db = MultiTableTransaction()
db.perform_transaction()
db.close()