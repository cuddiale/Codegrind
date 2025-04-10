# Creare una classe per gestire la connessione a un database MySQL usando mysql-connector-python.

import mysql.connector

class MySQLConnection:
    def __init__(self, host, user, password, database):
        self.host = host
        self.user = user
        self.password = password
        self.database = database

    def connect(self):
        self.connection = mysql.connector.connect(host=self.host,
                                                  user=self.user,
                                                  password=self.password,
                                                  database=self.database)
        print("Connessione stabilita:", self.connection)

    def close(self):
        if self.connection:
            self.connection.close()
            print("Connessione chiusa.")

db = MySQLConnection('localhost', 'user', 'password', 'testdb')
db.connect()
db.close()