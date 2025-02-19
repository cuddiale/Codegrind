# Inserire un singolo record utilizzando mysql-connector-python in modo sequenziale.

import mysql.connector

def insert_single_employee():
    connection = mysql.connector.connect(host='localhost', user='user', password='password', database='testdb')
    cursor = connection.cursor()
    cursor.execute("INSERT INTO employees (name, position) VALUES (%s, %s)", ("Lisa Moneypenny", "Sales"))
    connection.commit()
    print("Dipendente inserito con successo")
    cursor.close()


    connection.close()

insert_single_employee()