# Chiedere all'utente di indovinare un numero intero casuale compreso tra 1 e 10. Continuare a chiedere all'utente di indovinare finché non indovina il numero corretto. Usare un loop while.

import random

num = random.randint(1, 10)
guess = int(input("Indovina un numero compreso tra 1 e 10: "))

while guess != num:
    guess = int(input("Sbagliato. Prova ancora: "))

print("Indovinato!")