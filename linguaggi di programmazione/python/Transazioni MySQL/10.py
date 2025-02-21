# Simulare un fallimento transazionale e gestire il rollback appropriato con PyMySQL in modalità OOP.

import pymysql

class TransactionFailureSimulation:
    def __init__(self):
        self.connection = pymysql.connect(host='localhost', user='user', password='password', database='testdb', autocommit=False)

    def fail_transaction(self):
        try:
            with self.connection.cursor() as cursor:
                cursor.execute("INSERT INTO payments (customer_id, amount) VALUES (1, 100)")
                cursor.execute("UPDATE customers SET credit = credit - 100 WHERE customer_id = 1")  # Fail if credit goes below zero
                self.connection.commit()
                print("Transazione dovrebbe fallire qui")
        except pymysql.Error as error:
            print("Transazione fallita, rollback eseguito:", error)
            self.connection.rollback()

    def close(self):
        self.connection.close()

db = TransactionFailureSimulation()
db.fail_transaction()
db.close()