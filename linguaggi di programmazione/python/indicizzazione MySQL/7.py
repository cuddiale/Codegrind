# Creare un indice spaziale su una colonna utilizzando mysql-connector-python.

import mysql.connector

def create_spatial_index():
    connection = mysql.connector.connect(host='localhost', user='user', password='password', database='testdb')
    cursor = connection.cursor()
    try:
        cursor.execute("CREATE SPATIAL INDEX idx_spatial_location ON locations (location)")
        connection.commit()
        print("Indice spaziale creato con successo")
    except mysql.connector.Error as error:
        print("Errore nella creazione dell'indice spaziale:", error)
    finally:
        cursor.close()
        connection.close()

create_spatial_index()