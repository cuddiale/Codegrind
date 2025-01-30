# Data una stringa, crea un iteratore che restituisca ogni carattere della stringa in ordine inverso.

parola = "ciao"

class Inverso:
    def __init__(self, parola):
        self.parola = parola
        self.index = len(parola)

    def __iter__(self):
        return self

    def __next__(self):
        if self.index > 0:
            self.index -= 1
            return self.parola[self.index]
        else:
            raise StopIteration

iteratore_inverso = Inverso(parola)

for carattere in iteratore_inverso:
    print(carattere)