# Creare una classe che utilizza PyMySQL per stabilire una connessione al database MySQL.

import pymysql

class Database:
    def __init__(self, config):
        self.config = config

    def connect(self):
        self.connection = pymysql.connect(**self.config)
        print("Connessione stabilita:", self.connection)

    def close(self):
        self.connection.close()
        print("Connessione chiusa.")

config = {
    'host': 'localhost',
    'user': 'user',
    'password': 'password',
    'database': 'testdb',
    'charset': 'utf8mb4'
}

db = Database(config)
db.connect()
db.close()