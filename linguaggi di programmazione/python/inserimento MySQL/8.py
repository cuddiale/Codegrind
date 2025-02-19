# Scrivere uno script per inserire più record in una tabella usando mysql-connector-python in modo sequenziale.

import mysql.connector

def insert_multiple_employees():
    connection = mysql.connector.connect(host='localhost', user='user', password='password', database='testdb')
    cursor = connection.cursor()
    employees = [
        ("Mark Zulu", "Marketing"),
        ("Sally Struthers", "HR")
    ]
    cursor.executemany("INSERT INTO employees (name, position) VALUES (%s, %s)", employees)
    connection.commit()
    print(f"{cursor.rowcount} dipendenti inseriti con successo")
    cursor.close()
    connection.close()

insert_multiple_employees()