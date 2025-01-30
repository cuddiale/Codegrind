# Modifica la classe Auto in modo che erediti anche il metodo __str__() dalla classe Veicolo, in modo da stampare le informazioni sull’auto in questo formato: “Marca: Ferrari, Modello: Enzo, Anno: 2004, Colore: Rosso”.

class Veicolo:
    def __init__(self, marca, modello, anno):
        self.marca = marca
        self.modello = modello
        self.anno = anno

    def accelera(self):
        print("Sto accelerando")

    def frena(self):
        print("Sto frenando")

    def __str__(self):
        return f"Marca: {self.marca}, Modello: {self.modello}, Anno: {self.anno}"
    

class Auto(Veicolo):
    def __init__(self, marca, modello, anno, colore):
        super().__init__(marca, modello, anno)
        self.colore = colore

    def cambia_colore(self, nuovo_colore):
        self.colore = nuovo_colore

    def __str__(self):
        return super().__str__() + f", Colore: {self.colore}"