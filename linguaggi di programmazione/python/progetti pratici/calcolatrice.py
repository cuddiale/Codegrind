def add(a, b):
    return a + b

def subtract(a, b):
    return a - b

def multiply(a, b):
    return a * b

def divide(a, b):
    if b == 0:
        raise ValueError("Divisione per zero non permessa")
    return a / b

def main():
    while True:
        print("Seleziona l'operazione:")
        print("1. Addizione")
        print("2. Sottrazione")
        print("3. Moltiplicazione")
        print("4. Divisione")
        print("5. Esci")

        choice = input("Inserisci scelta (1/2/3/4/5): ")

        if choice == '5':
            print("Uscita...")
            break

        if choice not in ['1', '2', '3', '4']:
            print("Scelta non valida, riprova.")
            continue

        try:
            num1 = float(input("Inserisci il primo numero: "))
            num2 = float(input("Inserisci il secondo numero: "))
        except ValueError:
            print("Input non valido, riprova.")
            continue

        try:
            if choice == '1':
                result = add(num1, num2)
            elif choice == '2':
                result = subtract(num1, num2)
            elif choice == '3':
                result = multiply(num1, num2)
            elif choice == '4':
                result = divide(num1, num2)

            print(f"Il risultato è: {result}")
        except ValueError as e:
            print(e)

if __name__ == "__main__":
    main()