# Gestire una transazione che include più operazioni di aggiornamento utilizzando PyMySQL in modalità OOP.

import pymysql

class Database:
    def __init__(self):
        self.connection = pymysql.connect(host='localhost', user='user', password='password', database='testdb', autocommit=False)

    def manage_multiple_updates(self):
        try:
            with self.connection.cursor() as cursor:
                cursor.execute("UPDATE accounts SET balance = balance - 200 WHERE account_name = 'Account A'")
                cursor.execute("UPDATE accounts SET balance = balance + 200 WHERE account_name = 'Account B'")
                self.connection.commit()
                print("Transazione completata con successo")
        except pymysql.Error as error:
            print("Errore nella transazione:", error)
            self.connection.rollback()

    def close(self):
        self.connection.close()

db = Database()
db.manage_multiple_updates()
db.close()