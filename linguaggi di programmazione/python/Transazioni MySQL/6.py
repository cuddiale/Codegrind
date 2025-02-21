# Implementare un controllo di concorrenza ottimistica durante una transazione utilizzando PyMySQL

import pymysql

class ConcurrencyControlDatabase:
    def __init__(self):
        self.connection = pymysql.connect(host='localhost', user='user', password='password', database='testdb', autocommit=False)

    def update_with_concurrency_control(self):
        try:
            with self.connection.cursor() as cursor:
                # Assume 'version' is a column to control concurrency
                cursor.execute("SELECT version FROM accounts WHERE account_id = 1 FOR UPDATE")
                version = cursor.fetchone()
                cursor.execute("UPDATE accounts SET balance = balance + 100, version = %s WHERE account_id = 1 AND version = %s", (version[0] + 1, version[0]))
                self.connection.commit()
                print("Update completato con controllo di concorrenza")
        except pymysql.Error as error:
            print("Errore durante l'update:", error)
            self.connection.rollback()

    def close(self):
        self.connection.close()

db = ConcurrencyControlDatabase()
db.update_with_concurrency_control()
db.close()