# Chiedere all'utente di inserire una stringa. Stampare solo le consonanti della stringa usando un loop while.

s = input("Inserisci una stringa: ")
i = 0

while i < len(s):
    if s[i] not in "aeiouAEIOU":
        print(s[i], end="")
    i += 1