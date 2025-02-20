# Creare una classe per modificare un singolo record in una tabella usando PyMySQL

import pymysql

class UserDatabase:
    def __init__(self):
        self.connection = pymysql.connect(host='localhost', user='user', password='password', database='testdb')

    def update_user_email(self, user_id, new_email):
        with self.connection.cursor() as cursor:
            query = "UPDATE users SET email = %s WHERE user_id = %s"
            cursor.execute(query, (new_email, user_id))
            self.connection.commit()
            print("Email aggiornata con successo")

    def close(self):
        self.connection.close()

db = UserDatabase()
db.update_user_email(1, "newemail@example.com")
db.close()