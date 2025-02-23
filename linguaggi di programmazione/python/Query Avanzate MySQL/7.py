# Utilizzare una query ricorsiva per navigare una gerarchia di dati con mysql-connector-python.

import mysql.connector

def recursive_query():
    connection = mysql.connector.connect(host='localhost', user='user', password='password', database='testdb')
    cursor = connection.cursor()
    query = """
    WITH RECURSIVE EmployeeCTE AS (
        SELECT employee_id, manager_id, employee_name
        FROM employees
        WHERE manager_id IS NULL
        UNION ALL
        SELECT e.employee_id, e.manager_id, e.employee_name
        FROM employees e
        INNER JOIN EmployeeCTE ecte ON e.manager_id = ecte.employee_id
    )
    SELECT * FROM EmployeeCTE
    """
    cursor.execute(query)
    results = cursor.fetchall()
    for row in results:
        print(row)
    cursor.close()
    connection.close()

recursive_query()