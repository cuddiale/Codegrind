# Data una lista di numeri, crea un iteratore che restituisca la somma cumulativa dei numeri.

numeri = [1, 2, 3, 4, 5]

class Cumulativo:
    def __init__(self, numeri):
        self.numeri = numeri
        self.index = 0
        self.somma = 0

    def __iter__(self):
        return self

    def __next__(self):
        if self.index < len(self.numeri):
            self.somma += self.numeri[self.index]
            self.index += 1
            return self.somma
        else:
            raise StopIteration

iteratore_cumulativo = Cumulativo(numeri)

for somma in iteratore_cumulativo:
    print(somma)