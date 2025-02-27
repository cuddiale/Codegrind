import random
import string

def generate_password(length, include_lowercase, include_uppercase, include_digits, include_symbols):
    characters = ""
    if include_lowercase:
        characters += string.ascii_lowercase
    if include_uppercase:
        characters += string.ascii_uppercase
    if include_digits:
        characters += string.digits
    if include_symbols:
        characters += string.punctuation

    if not characters:
        raise ValueError("Devi selezionare almeno un tipo di carattere per generare una password.")

    password = ''.join(random.choice(characters) for _ in range(length))
    return password

def main():
    print("Generatore di Password Sicure")

    while True:
        try:
            length = int(input("Inserisci la lunghezza della password: "))
            include_lowercase = input("Includere lettere minuscole? (s/n): ").lower() == 's'
            include_uppercase = input("Includere lettere maiuscole? (s/n): ").lower() == 's'
            include_digits = input("Includere numeri? (s/n): ").lower() == 's'
            include_symbols = input("Includere simboli? (s/n): ").lower() == 's'

            password = generate_password(length, include_lowercase, include_uppercase, include_digits, include_symbols)
            print(f"La tua password generata è: {password}")

        except ValueError as e:
            print(e)

        another = input("Vuoi generare un'altra password? (s/n): ").lower()
        if another != 's':
            break

if __name__ == "__main__":
    main()