-- Aggiungi un vincolo di chiave esterna alla colonna "IDCliente" nella tabella "Carrello" riferito alla colonna "ID" nella tabella "Cliente"

ALTER TABLE Carrello
ADD FOREIGN KEY (IDCliente) REFERENCES Cliente(ID);