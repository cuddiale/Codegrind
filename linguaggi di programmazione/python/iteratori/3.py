# Data una lista di parole, crea un iteratore che restituisca solo le parole che contengono una data lettera.

parole = ["casa", "cane", "gatto", "auto", "treno", "bicicletta"]
lettera = "a"

class ConLettera:
    def __init__(self, parole, lettera):
        self.parole = parole
        self.lettera = lettera
        self.index = 0

    def __iter__(self):
        return self

    def __next__(self):
        while self.index < len(self.parole):
            if self.lettera in self.parole[self.index]:
                valore = self.parole[self.index]
                self.index += 1
                return valore
            else:
                self.index += 1
        raise StopIteration

iteratore_con_lettera = ConLettera(parole, lettera)

for parola in iteratore_con_lettera:
    print(parola)