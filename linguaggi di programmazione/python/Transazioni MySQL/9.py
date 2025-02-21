# Implementare una transazione complessa con multiple operazioni e gestire il rollback in caso di errore con mysql-connector-python.

import mysql.connector

class ComplexRollbackTransaction:
    def __init__(self):
        self.connection = mysql.connector.connect(host='localhost', user='user', password='password', database='testdb', autocommit=False)

    def execute_complex_transaction(self):
        cursor = self.connection.cursor()
        try:
            cursor.execute("DELETE FROM orders WHERE order_id = 10")
            cursor.execute("UPDATE inventory SET quantity = quantity - 10 WHERE product_id = 1")  # This might cause an error if not enough inventory
            self.connection.commit()
            print("Transazione complessa eseguita con successo")
        except mysql.connector.Error as error:
            print("Errore rilevato, rollback eseguito:", error)
            self.connection.rollback()
        finally:
            cursor.close()

    def close(self):
        self.connection.close()

db = ComplexRollbackTransaction()
db.execute_complex_transaction()
db.close()