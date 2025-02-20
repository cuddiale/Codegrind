# Scrivere uno script per modificare record con condizioni specifiche usando PyMySQL.

import pymysql

def update_conditional_records():
    connection = pymysql.connect(host='localhost', user='user', password='password', database='testdb')
    cursor = connection.cursor()
    query = "UPDATE employees SET salary = salary + 5000 WHERE position = 'Developer'"
    cursor.execute(query)
    connection.commit()
    print(f"{cursor.rowcount} record aggiornati con successo")
    cursor.close()
    connection.close()

update_conditional_records()