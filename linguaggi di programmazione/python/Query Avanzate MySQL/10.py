# Utilizzare una query per suddividere i record in parti eque basate su un criterio specifico con PyMySQL in modalità OOP.

import pymysql

class EqualPartitionDatabase:
    def __init__(self):
        self.connection = pymysql.connect(host='localhost', user='user', password='password', database='testdb')

    def partition_query(self):
        try:
            with self.connection.cursor() as cursor:
                query = """
                SELECT customer_id, order_id, total_amount,
                       NTILE(4) OVER (ORDER BY total_amount DESC) AS quartile
                FROM orders
                """
                cursor.execute(query)
                results = cursor.fetchall()
                for row in results:
                    print(row)
        except pymysql.Error as error:
            print("Errore nella query di partizione:", error)

    def close(self):
        self.connection.close()

db = EqualPartitionDatabase()
db.partition_query()
db.close()