# Creare una classe che recupera tutte le informazioni da una tabella specifica utilizzando PyMySQL.

import pymysql

class CompleteFetchDatabase:
    def __init__(self):
        self.connection = pymysql.connect(host='localhost', user='user', password='password', database='testdb')

    def fetch_all(self, table_name):


 with self.connection.cursor() as cursor:
            query = f"SELECT * FROM {table_name}"
            cursor.execute(query)
            results = cursor.fetchall()
            for row in results:
                print("Record:", row)

    def close(self):
        self.connection.close()

db = CompleteFetchDatabase()
db.fetch_all('employees')
db.close()
