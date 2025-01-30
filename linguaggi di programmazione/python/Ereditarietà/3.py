# Scrivi una classe Forma che abbia un metodo area() che calcoli l’area della forma. Poi crea le classi Quadrato e Cerchio che ereditino dalla classe Forma e che implementino il metodo area() in modo appropriato per ogni forma. Utilizza le classi create per creare un quadrato e un cerchio, quindi stampa l’area di ognuno di essi.

import math

class Forma:
    def area(self):
        pass

class Quadrato(Forma):
    def __init__(self, lato):
        self.lato = lato

    def area(self):
        return self.lato ** 2

class Cerchio(Forma):
    def __init__(self, raggio):
        self.raggio = raggio

    def area(self):
        return math.pi * self.raggio ** 2

quadrato = Quadrato(5)
print(quadrato.area())

cerchio = Cerchio(5)
print(cerchio.area())