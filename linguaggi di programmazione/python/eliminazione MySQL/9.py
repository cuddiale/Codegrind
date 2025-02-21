# Eliminare dettagli da una tabella filtrando i risultati in base a una condizione specifica usando mysql-connector-python

import mysql.connector

def delete_detailed_records():
    connection = mysql.connector.connect(host='localhost', user='user', password='password', database='testdb')
    cursor = connection.cursor()
    query = "DELETE FROM projects WHERE end_date IS NULL"
    cursor.execute(query)
    connection.commit()
    print(f"{cursor.rowcount} progetti senza data di fine eliminati con successo")
    cursor.close()
    connection.close()

delete_detailed_records()