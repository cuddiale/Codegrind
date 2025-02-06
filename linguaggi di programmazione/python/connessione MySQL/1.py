# Esempio di connessione a un database MySQL usando PyMySQL.

import pymysql.cursors

def connect_db():
    connection = pymysql.connect(host='localhost',
                                 user='user',
                                 password='password',
                                 database='testdb',
                                 charset='utf8mb4',
                                 cursorclass=pymysql.cursors.DictCursor)
    try:
        print("Connessione stabilita:", connection)
    finally:
        connection.close()

connect_db()