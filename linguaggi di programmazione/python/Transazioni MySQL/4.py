# Gestire una transazione complessa che include insert e update con controllo di errori in PyMySQL.

import pymysql

class AdvancedTransaction:
    def __init__(self):
        self.connection = pymysql.connect(host='localhost', user='user', password='password', database='testdb', autocommit=False)

    def execute_transaction(self):
        try:
            with self.connection.cursor() as cursor:
                cursor.execute("INSERT INTO products (product_name, quantity) VALUES ('New Product', 10)")
                cursor.execute("UPDATE products SET quantity = quantity + 10 WHERE product_id = 1")
                self.connection.commit()
                print("Transazione eseguita con successo")
        except pymysql.Error as error:
            print("Errore nella transazione, effettuato rollback:", error)
            self.connection.rollback()

    def close(self):
        self.connection.close()

db = AdvancedTransaction()
db.execute_transaction()
db.close()