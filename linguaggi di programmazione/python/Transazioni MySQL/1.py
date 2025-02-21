# Gestire una transazione semplice che include l'inserimento di dati utilizzando mysql-connector-python.

import mysql.connector

def manage_transaction():
    connection = mysql.connector.connect(host='localhost', user='user', password='password', database='testdb', autocommit=False)
    cursor = connection.cursor()
    try:
        cursor.execute("INSERT INTO accounts (account_name, balance) VALUES ('New Account', 500)")
        cursor.execute("UPDATE accounts SET balance = balance + 100 WHERE account_name = 'Existing Account'")
        connection.commit()
        print("Transazione completata con successo")
    except mysql.connector.Error as error:
        print("Errore nella transazione:", error)
        connection.rollback()
    finally:
        cursor.close()
        connection.close()

manage_transaction()