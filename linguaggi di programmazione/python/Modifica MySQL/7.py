# Creare una classe per modificare record condizionati con PyMySQL.


import pymysql

class DepartmentDatabase:
    def __init__(self):
        self.connection = pymysql.connect(host='localhost', user='user', password='password', database='testdb')

    def update_department_name(self, old_name, new_name):
        with self.connection.cursor() as cursor:
            query = "UPDATE departments SET name = %s WHERE name = %s"
            cursor.execute(query, (new_name, old_name))
            self.connection.commit()
            print(f"{cursor.rowcount} record aggiornati con successo")

    def close(self):
        self.connection.close()

db = DepartmentDatabase()
db.update_department_name("Sales", "Global Sales")
db.close()