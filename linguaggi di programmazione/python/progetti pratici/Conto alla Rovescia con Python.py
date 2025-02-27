import time

def countdown(seconds):
    while seconds:
        mins, secs = divmod(seconds, 60)
        timeformat = '{:02d}:{:02d}'.format(mins, secs)
        print(timeformat, end='\r')
        time.sleep(1)
        seconds -= 1

    print("Tempo scaduto!")

def main():
    print("Conto alla Rovescia")

    while True:
        try:
            seconds = int(input("Inserisci il tempo del conto alla rovescia in secondi: "))
            if seconds <= 0:
                print("Il tempo deve essere maggiore di zero.")
                continue

            countdown(seconds)

        except ValueError:
            print("Inserisci un numero valido.")

        another = input("Vuoi impostare un altro conto alla rovescia? (s/n): ").lower()
        if another != 's':
            break

if __name__ == "__main__":
    main()