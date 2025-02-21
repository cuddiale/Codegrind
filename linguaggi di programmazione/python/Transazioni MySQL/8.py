# Configurare il livello di isolamento della transazione e gestire una semplice transazione con PyMySQL.

import pymysql

def setup_transaction

_isolation():
    connection = pymysql.connect(host='localhost', user='user', password='password', database='testdb', autocommit=False)
    cursor = connection.cursor()
    cursor.execute("SET SESSION TRANSACTION ISOLATION LEVEL REPEATABLE READ")
    try:
        cursor.execute("UPDATE accounts SET balance = balance + 100 WHERE account_id = 1")
        connection.commit()
        print("Transazione eseguita con successo con isolamento ripetibile")
    except pymysql.Error as error:
        print("Errore durante la transazione:", error)
        connection.rollback()
    finally:
        cursor.close()
        connection.close()

setup_transaction_isolation()