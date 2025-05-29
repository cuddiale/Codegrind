-- Aggiungi un vincolo di chiave esterna alla colonna "IDProdotto" nella tabella "Carrello" riferito alla colonna "ID" nella tabella "Prodotto"

ALTER TABLE Carrello
ADD FOREIGN KEY (IDProdotto) REFERENCES Prodotto(ID);
