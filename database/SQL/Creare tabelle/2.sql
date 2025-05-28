-- Crea una tabella chiamata "Libro" con le colonne "ISBN" (chiave primaria), "Titolo" e "Autore"

CREATE TABLE Libro (
    ISBN VARCHAR(20) PRIMARY KEY,
    Titolo VARCHAR(100),
    Autore VARCHAR(100)
);