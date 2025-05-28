-- Crea una tabella chiamata "Prodotto" con le colonne "ID" (chiave primaria), "Nome" e "Prezzo" (non nullo)

CREATE TABLE Prodotto (
    ID INT PRIMARY KEY,
    Nome VARCHAR(100),
    Prezzo DECIMAL(10, 2) NOT NULL
);