# Simulare un errore e gestire il rollback di una transazione utilizzando mysql-connector-python.

import mysql.connector

def transaction_with_rollback():
    connection = mysql.connector.connect(host='localhost', user='user', password='password', database='testdb', autocommit=False)
    cursor = connection.cursor()
    try:
        cursor.execute("INSERT INTO orders (order_date, customer_id) VALUES (NOW(), 1)")
        cursor.execute("UPDATE orders SET order_date = NULL WHERE customer_id = 1")  # This will cause an error intentionally
        connection.commit()
    except mysql.connector.Error as error:
        print("Errore rilevato, rollback:", error)
        connection.rollback()
    finally:
        cursor.close()
        connection.close()

transaction_with_rollback()