from pymongo import MongoClient
from bson.objectid import ObjectId
import bcrypt

# Connessione al database
client = MongoClient('mongodb://localhost:27017/')
db = client['task_manager']

# Collezioni
users_collection = db['users']
tasks_collection = db['tasks']

# Funzioni per la gestione degli utenti
def create_user(username, password):
    hashed = bcrypt.hashpw(password.encode('utf-8'), bcrypt.gensalt())
    user = {"username": username, "password": hashed}
    users_collection.insert_one(user)
    print("Utente creato:", username)

def authenticate_user(username, password):
    user = users_collection.find_one({"username": username})
    if user and bcrypt.checkpw(password.encode('utf-8'), user['password']):
        print("Autenticazione riuscita")
        return True
    else:
        print("Autenticazione fallita")
        return False

# Funzioni per la gestione dei task
def create_task(user_id, title, description, due_date):
    task = {
        "user_id": user_id,
        "title": title,
        "description": description,
        "due_date": due_date,
        "completed": False
    }
    tasks_collection.insert_one(task)
    print("Task creato:", title)

def get_tasks(user_id):
    tasks = tasks_collection.find({"user_id": user_id})
    for task in tasks:
        print(task)

def update_task(task_id, updates):
    tasks_collection.update_one({"_id": ObjectId(task_id)}, {"$set": updates})
    print("Task aggiornato")

def delete_task(task_id):
    tasks_collection.delete_one({"_id": ObjectId(task_id)})
    print("Task eliminato")

# Funzioni di ricerca e filtraggio
def search_tasks(user_id, query):
    tasks = tasks_collection.find({"user_id": user_id, "$text": {"$search": query}})
    for task in tasks:
        print(task)

def filter_tasks(user_id, filter):
    tasks = tasks_collection.find({"user_id": user_id, **filter})
    for task in tasks:
        print(task)

# Esempio di utilizzo
def main():
    # Registrazione e autenticazione dell'utente
    username = input("Inserisci username: ")
    password = input("Inserisci password: ")
    create_user(username, password)
    if authenticate_user(username, password):
        user = users_collection.find_one({"username": username})
        user_id = user['_id']

        # Creazione di un task
        create_task(user_id, "Task 1", "Descrizione del Task 1", "2024-07-15")

        # Lettura dei task
        print("I tuoi task:")
        get_tasks(user_id)

        # Aggiornamento di un task
        task_id = input("Inserisci l'ID del task da aggiornare: ")
        updates = {"completed": True}
        update_task(task_id, updates)

        # Eliminazione di un task
        task_id = input("Inserisci l'ID del task da eliminare: ")
        delete_task(task_id)

        # Ricerca di task
        query = input("Inserisci la query di ricerca: ")
        search_tasks(user_id, query)

        # Filtraggio di task
        filter = {"completed": False}
        print("Task non completati:")
        filter_tasks(user_id, filter)

if __name__ == "__main__":
    main()