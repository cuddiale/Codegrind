# Scrivere un programma che gestisce più tipi di eccezioni in un solo blocco `except` e utilizza un blocco `finally` per mostrare un messaggio di fine operazione.

try:
    valore = int(input("Inserisci un valore: "))
    print(10 / valore)
except (ValueError, ZeroDivisionError) as e:
    print("Errore:", e)
finally:
    print("Tentativo di calcolo completato.")