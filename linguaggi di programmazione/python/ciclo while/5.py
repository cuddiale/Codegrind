# Chiedere all'utente di inserire una stringa. Stampare la stringa al contrario usando un loop while.

s = input("Inserisci una stringa: ")
i = len(s) - 1

while i >= 0:
    print(s[i], end="")
    i -= 1