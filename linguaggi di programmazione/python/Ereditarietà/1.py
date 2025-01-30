# Scrivere una classe Veicolo che abbia le seguenti proprietà: marca, modello e anno. Aggiungi poi i metodi accellera e frena. Creare poi una classe Auto che eredita da Veicolo ma aggiunge la proprietà colore ed il metodo cambia_colore().

class Veicolo:
    def __init__(self, marca, modello, anno):
        self.marca = marca
        self.modello = modello
        self.anno = anno

    def accelera(self):
        print("Sto accelerando")

    def frena(self):
        print("Sto frenando")


class Auto(Veicolo):
    def __init__(self, marca, modello, anno, colore):
        super().__init__(marca, modello, anno)
        self.colore = colore

    def cambia_colore(self, nuovo_colore):
        self.colore = nuovo_colore