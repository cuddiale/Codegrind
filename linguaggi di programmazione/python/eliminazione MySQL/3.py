# Scrivere uno script per eliminare record con condizioni specifiche usando PyMySQL.

import pymysql

def delete_conditional_records():
    connection = pymysql.connect(host='localhost', user='user', password='password', database='testdb')
    cursor = connection.cursor()
    query = "DELETE FROM products WHERE price < %s"
    price = (50,)
    cursor.execute(query, price)
    connection.commit()
    print(f"{cursor.rowcount} prodotti eliminati con successo")
    cursor.close()
    connection.close()

delete_conditional_records()