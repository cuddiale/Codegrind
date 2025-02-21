# Scrivere un script che gestisce un errore di transazione causato da un vincolo di chiave esterna utilizzando mysql-connector-python.

import mysql.connector

def transaction_error_management():
    connection = mysql.connector.connect(host='localhost', user='user', password='password', database='testdb', autocommit=False)
    cursor = connection.cursor()
    try:
        cursor.execute("INSERT INTO payments (customer_id, amount) VALUES (9999, 100)")  # Non-existent customer_id
        connection.commit()
    except mysql.connector.Error as error:
        print("Transazione fallita, rollback eseguito:", error)
        connection.rollback()
    finally:
        cursor.close()
        connection.close()

transaction_error_management()