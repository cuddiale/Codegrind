-- Crea una tabella chiamata "Carrello" con le colonne "ID" (chiave primaria), "IDCliente" (chiave esterna), "IDProdotto" (chiave esterna) e "Quantita"

CREATE TABLE Carrello (
    ID INT PRIMARY KEY,
    IDCliente INT,
    IDProdotto INT,
    Quantita INT,
    FOREIGN KEY (IDCliente) REFERENCES Cliente(ID),
    FOREIGN KEY (IDProdotto) REFERENCES Prodotto(ID)
);
