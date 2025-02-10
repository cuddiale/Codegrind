# Utilizzare MySQLdb per connettersi a un database MySQL.

import MySQLdb

def connect_db():
    db = MySQLdb.connect(host="localhost", user="user", passwd="password", db="testdb")
    print("Connessione stabilita:", db)
    db.close()

connect_db()