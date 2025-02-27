import mysql.connector

# Connessione al database
def connect_db():
    return mysql.connector.connect(
        host="localhost",
        user="your_username",
        password="your_password",
        database="phonebook"
    )

# Creazione di un contatto
def create_contact(name, phone, email):
    db = connect_db()
    cursor = db.cursor()
    query = "INSERT INTO contacts (name, phone, email) VALUES (%s, %s, %s)"
    values = (name, phone, email)
    cursor.execute(query, values)
    db.commit()
    print("Contatto creato con successo.")
    cursor.close()
    db.close()

# Lettura dei contatti
def read_contacts():
    db = connect_db()
    cursor = db.cursor()
    cursor.execute("SELECT * FROM contacts")
    results = cursor.fetchall()
    for row in results:
        print(f"ID: {row[0]}, Nome: {row[1]}, Telefono: {row[2]}, Email: {row[3]}")
    cursor.close()
    db.close()

# Aggiornamento di un contatto
def update_contact(contact_id, name, phone, email):
    db = connect_db()
    cursor = db.cursor()
    query = "UPDATE contacts SET name = %s, phone = %s, email = %s WHERE id = %s"
    values = (name, phone, email, contact_id)
    cursor.execute(query, values)
    db.commit()
    print("Contatto aggiornato con successo.")
    cursor.close()
    db.close()

# Eliminazione di un contatto
def delete_contact(contact_id):
    db = connect_db()
    cursor = db.cursor()
    query = "DELETE FROM contacts WHERE id = %s"
    values = (contact_id,)
    cursor.execute(query, values)
    db.commit()
    print("Contatto eliminato con successo.")
    cursor.close()
    db.close()

# Esempio di utilizzo
def main():
    while True:
        print("\nGestione Rubrica Telefonica")
        print("1. Crea un nuovo contatto")
        print("2. Visualizza tutti i contatti")
        print("3. Aggiorna un contatto")
        print("4. Elimina un contatto")
        print("5. Esci")

        choice = input("Seleziona un'opzione: ")

        if choice == '1':
            name = input("Inserisci il nome: ")
            phone = input("Inserisci il telefono: ")
            email = input("Inserisci l'email: ")
            create_contact(name, phone, email)
        elif choice == '2':
            read_contacts()
        elif choice == '3':
            contact_id = input("Inserisci l'ID del contatto da aggiornare: ")
            name = input("Inserisci il nuovo nome: ")
            phone = input("Inserisci il nuovo telefono: ")
            email = input("Inserisci la nuova email: ")
            update_contact(contact_id, name, phone, email)
        elif choice == '4':
            contact_id = input("Inserisci l'ID del contatto da eliminare: ")
            delete_contact(contact_id)
        elif choice == '5':
            print("Uscita...")
            break
        else:
            print("Scelta non valida, riprova.")

if __name__ == "__main__":
    main()