import random

def main():
    print("Benvenuto al gioco 'Indovina il Numero'!")
    print("Ho pensato a un numero tra 1 e 100. Riesci a indovinarlo?")

    numero_da_indovinare = random.randint(1, 100)
    tentativi = 0

    while True:
        tentativo = input("Inserisci il tuo tentativo (o 'esci' per terminare): ")

        if tentativo.lower() == 'esci':
            print("Hai deciso di terminare il gioco. Alla prossima!")
            break

        try:
            tentativo = int(tentativo)
            tentativi += 1

            if tentativo < numero_da_indovinare:
                print("Troppo basso. Riprova!")
            elif tentativo > numero_da_indovinare:
                print("Troppo alto. Riprova!")
            else:
                print(f"Congratulazioni! Hai indovinato il numero {numero_da_indovinare} in {tentativi} tentativi.")
                break
        except ValueError:
            print("Inserisci un numero valido.")

if __name__ == "__main__":
    main()