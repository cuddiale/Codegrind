# Eliminare record specificando una condizione complessa con mysql-connector-python.

import mysql.connector

def delete_specific_records():
    connection = mysql.connector.connect(host='localhost', user='user', password='password', database='testdb')
    cursor = connection.cursor()
    query = "DELETE FROM orders WHERE order_date < %s AND status = %s"
    data = ("2022-01-01", "Pending")
    cursor.execute(query, data)
    connection.commit()
    print(f"{cursor.rowcount} ordini eliminati con successo")
    cursor.close()
    connection.close()

delete_specific_records()