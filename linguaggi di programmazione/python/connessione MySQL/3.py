# Stabilire una connessione a un database MySQL usando SQLAlchemy.

from sqlalchemy import create_engine

def connect_db():
    engine = create_engine('mysql+pymysql://user:password@localhost/testdb')
    connection = engine.connect()
    print("Connessione stabilita:", connection)
    connection.close()

connect_db()