# Calcolare la somma dei primi n numeri interi positivi usando un loop while. L'utente deve inserire il valore di n.

n = int(input("Inserisci un valore per n: "))
sum = 0
i = 1
while i <= n:
    sum += i
    i += 1
print("La somma dei primi", n, "numeri interi positivi è", sum)