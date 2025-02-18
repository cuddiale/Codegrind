# Scrivere un script per inserire un singolo record usando PyMySQL.

import pymysql

def insert_single_record():
    connection = pymysql.connect(host='localhost', user='user', password='password', database='testdb')
    cursor = connection.cursor()
    query = "INSERT INTO products (name, price) VALUES (%s, %s)"
    product = ("Coffee", 2.99)
    cursor.execute(query, product)
    connection.commit()
    print("Prodotto inserito con successo")
    cursor.close()
    connection.close()

insert_single_record()