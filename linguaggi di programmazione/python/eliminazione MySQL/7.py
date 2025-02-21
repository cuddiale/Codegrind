# Scrivere uno script per eseguire una eliminazione basata su un'aggregazione (es. DELETE WHERE id IN ...) usando PyMySQL.

import pymysql

def delete_aggregate_data():
    connection = pymysql.connect(host='localhost', user='user', password='password', database='testdb')
    cursor = connection.cursor()
    subquery = "SELECT employee_id FROM employees WHERE hire_date < %s"
    hire_date = ("2015-01-01",)
    query = f"DELETE FROM employees WHERE employee_id IN ({subquery})"
    cursor.execute(query, hire_date)
    connection.commit()
    print(f"{cursor.rowcount} dipendenti assunti prima del 2015 eliminati con successo")
    cursor.close()
    connection.close()

delete_aggregate_data()