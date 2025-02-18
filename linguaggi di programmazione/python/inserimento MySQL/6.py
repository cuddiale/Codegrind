# Inserire più record in una tabella utilizzando PyMySQL in modo sequenziale.

import pymysql

def insert_multiple_records():
    connection = pymysql.connect(host='localhost', user='user', password='password', database='testdb')
    cursor = connection.cursor()
    products = [
        ("Bookcase", 150.00),
        ("Armchair", 299.99),
        ("Couch", 499.95)
    ]
    cursor.executemany("INSERT INTO products (name, price) VALUES (%s, %s)", products)
    connection.commit()
    print(f"{cursor.rowcount} prodotti inseriti con successo")
    cursor.close()
    connection.close()

insert_multiple_records()