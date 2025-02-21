# Creare una classe per eliminare un singolo record da una tabella usando PyMySQL.

import pymysql

class UserDatabase:
    def __init__(self):
        self.connection = pymysql.connect(host='localhost', user='user', password='password', database='testdb')

    def delete_user(self, user_id):
        with self.connection.cursor() as cursor:
            cursor.execute("DELETE FROM users WHERE user_id = %s", (user_id,))
            self.connection.commit()
            print("Utente eliminato con successo")

    def close(self):
        self.connection.close()

db = UserDatabase()
db.delete_user(3)
db.close()