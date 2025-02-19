# Creare una classe per recuperare un singolo record da una tabella usando PyMySQL.

import pymysql

class UserDatabase:
    def __init__(self):
        self.connection = pymysql.connect(host='localhost', user='user', password='password', database='testdb')

    def fetch_user(self, user_id):
        with self.connection.cursor() as cursor:
            cursor.execute("SELECT name, email FROM users WHERE user_id = %s", (user_id,))
            result = cursor.fetchone()
            if result:
                print("Utente trovato:", result)
            else:
                print("Nessun utente trovato con l'ID specificato.")

    def close(self):
        self.connection.close()

db = UserDatabase()
db.fetch_user(1)
db.close()