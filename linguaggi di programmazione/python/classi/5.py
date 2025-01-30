# Crea una classe GestoreMagazzino che gestisca un magazzino di prodotti. La classe dovrà avere i seguenti attributi:
# Un dizionario “prodotti” che mappa i nomi dei prodotti ai rispettivi oggetti “Prodotto” (che descriverai in seguito)
# Una variabile “costo_magazzinaggio” che indica il costo per magazzinare ogni prodotto per un mese
# La classe dovrà avere i seguenti metodi:
# Un metodo “aggiungi_prodotto” che aggiunga un nuovo prodotto al magazzino
# Un metodo “rimuovi_prodotto” che rimuova un prodotto dal magazzino
# Un metodo “calcola_costi_magazzinaggio” che calcoli i costi di magazzinaggio per tutti i prodotti presenti nel magazzino
# # Crea inoltre una classe Prodotto che abbia gli attributi “nome”, “prezzo” e “scorta”.


class Prodotto:
  def __init__(self, nome, prezzo, scorta):
    self.nome = nome
    self.prezzo = prezzo
    self.scorta = scorta

class GestoreMagazzino:
  def __init__(self, costo_magazzinaggio):
    self.prodotti = {}
    self.costo_magazzinaggio = costo_magazzinaggio

  def aggiungi_prodotto(self, prodotto):
    self.prodotti[prodotto.nome] = prodotto

  def rimuovi_prodotto(self, nome_prodotto):
    self.prodotti.pop(nome_prodotto)

  def calcola_costi_magazzinaggio(self):
    costi = 0
    for nome, prodotto in self.prodotti.items():
      costi += prodotto.scorta * self.costo_magazzinaggio
    return costi
  

p1 = Prodotto("Telefono", 500, 10)
p2 = Prodotto("Computer", 1000, 5)

gm = GestoreMagazzino(10)

gm.aggiungi_prodotto(p1)
gm.aggiungi_prodotto(p2)

print(gm.calcola_costi_magazzinaggio())  # 150 (10*10 + 5*10)

gm.rimuovi_prodotto("Telefono")

print(gm.calcola_costi_magazzinaggio())  # 50 (5*10)