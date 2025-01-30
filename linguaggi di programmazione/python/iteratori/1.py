# Data una lista di numeri, crea un iteratore che restituisca solo i numeri pari.

numeri = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

class Pari:
    def __init__(self, numeri):
        self.numeri = numeri
        self.index = 0

    def __iter__(self):
        return self

    def __next__(self):
        while self.index < len(self.numeri):
            if self.numeri[self.index] % 2 == 0:
                valore = self.numeri[self.index]
                self.index += 1
                return valore
            else:
                self.index += 1
        raise StopIteration

iteratore_pari = Pari(numeri)

for numero in iteratore_pari:
    print(numero)