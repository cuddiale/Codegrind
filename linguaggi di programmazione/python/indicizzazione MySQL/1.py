import mysql.connector

def create_index():
    connection = mysql.connector.connect(host='localhost', user='user', password='password', database='testdb')
    cursor = connection.cursor()
    try:
        cursor.execute("CREATE INDEX idx_employee_name ON employees (name)")
        connection.commit()
        print("Indice creato con successo")
    except mysql.connector.Error as error:
        print("Errore nella creazione dell'indice:", error)
    finally:
        cursor.close()
        connection.close()

create_index()