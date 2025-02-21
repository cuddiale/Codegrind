# Creare una classe che elimina tutte le informazioni da una tabella specifica utilizzando PyMySQL.

import pymysql

class

 CompleteDeleteDatabase:
    def __init__(self):
        self.connection = pymysql.connect(host='localhost', user='user', password='password', database='testdb')

    def delete_all(self, table_name):
        with self.connection.cursor() as cursor:
            query = f"DELETE FROM {table_name}"
            cursor.execute(query)
            self.connection.commit()
            print(f"Tutti i record dalla tabella {table_name} sono stati eliminati")

    def close(self):
        self.connection.close()

db = CompleteDeleteDatabase()
db.delete_all('temporary_logs')
db.close()