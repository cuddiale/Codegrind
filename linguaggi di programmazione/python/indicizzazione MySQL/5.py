# Visualizzare tutti gli indici di una tabella utilizzando mysql-connector-python.

import mysql.connector

def show_indexes():
    connection = mysql.connector.connect(host='localhost', user='user', password='password', database='testdb')
    cursor = connection.cursor()
    try:
        cursor.execute("SHOW INDEXES FROM employees")
        indexes = cursor.fetchall()
        for index in indexes:
            print(index)
    except mysql.connector.Error as error:
        print("Errore nella visualizzazione degli indici:", error)
    finally:
        cursor.close()
        connection.close()

show_indexes()