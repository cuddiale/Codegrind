# Utilizzare mysql-connector-python per modificare record in più tabelle in modalità OOP.


import mysql.connector

class MultiTableDatabase:
    def __init__(self):
        self.connection = mysql.connector.connect(host='localhost', user='user', password='password', database='

testdb')

    def update_employee_and_department(self, employee_id, new_position, department_id, new_department_name):
        cursor = self.connection.cursor()
        try:
            cursor.execute("UPDATE employees SET position = %s WHERE employee_id = %s", (new_position, employee_id))
            cursor.execute("UPDATE departments SET name = %s WHERE department_id = %s", (new_department_name, department_id))
            self.connection.commit()
            print("Record aggiornati con successo")
        except mysql.connector.Error as err:
            print(f"Errore: {err}")
            self.connection.rollback()
        finally:
            cursor.close()

    def close(self):
        self.connection.close()

db = MultiTableDatabase()
db.update_employee_and_department(1, "Senior Manager", 2, "Marketing and Sales")
db.close()