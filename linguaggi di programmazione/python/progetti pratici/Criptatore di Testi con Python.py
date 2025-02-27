from cryptography.fernet import Fernet

# Funzione per generare una chiave
def generate_key():
    return Fernet.generate_key()

# Funzione per criptare un messaggio
def encrypt_message(key, message):
    fernet = Fernet(key)
    encrypted_message = fernet.encrypt(message.encode())
    return encrypted_message

# Funzione per decriptare un messaggio
def decrypt_message(key, encrypted_message):
    fernet = Fernet(key)
    decrypted_message = fernet.decrypt(encrypted_message).decode()
    return decrypted_message

def main():
    print("Criptatore di Testi")

    while True:
        print("\nSeleziona un'opzione:")
        print("1. Genera una nuova chiave")
        print("2. Cripta un messaggio")
        print("3. Decripta un messaggio")
        print("4. Esci")

        choice = input("Inserisci la tua scelta: ")

        if choice == '1':
            key = generate_key()
            print(f"Chiave generata: {key.decode()}")
        elif choice == '2':
            key = input("Inserisci la chiave: ").encode()
            message = input("Inserisci il messaggio da criptare: ")
            encrypted_message = encrypt_message(key, message)
            print(f"Messaggio criptato: {encrypted_message.decode()}")
        elif choice == '3':
            key = input("Inserisci la chiave: ").encode()
            encrypted_message = input("Inserisci il messaggio criptato: ").encode()
            try:
                decrypted_message = decrypt_message(key, encrypted_message)
                print(f"Messaggio decriptato: {decrypted_message}")
            except Exception as e:
                print(f"Errore durante la decrittazione: {e}")
        elif choice == '4':
            print("Uscita...")
            break
        else:
            print("Scelta non valida, riprova.")

if __name__ == "__main__":
    main()