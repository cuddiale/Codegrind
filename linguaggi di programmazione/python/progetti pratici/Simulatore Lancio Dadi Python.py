import random

def roll_dice(num_dice):
    results = [random.randint(1, 6) for _ in range(num_dice)]
    return results

def main():
    print("Simulatore di Lancio di Dadi")

    while True:
        try:
            num_dice = int(input("Inserisci il numero di dadi da lanciare: "))
            if num_dice <= 0:
                print("Il numero di dadi deve essere maggiore di zero.")
                continue

            results = roll_dice(num_dice)
            print(f"Risultati del lancio: {', '.join(map(str, results))}")

        except ValueError:
            print("Inserisci un numero valido.")

        another = input("Vuoi lanciare di nuovo? (s/n): ").lower()
        if another != 's':
            break

if __name__ == "__main__":
    main()