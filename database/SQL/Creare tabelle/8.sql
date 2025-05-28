-- Crea una tabella chiamata "Articolo" con le colonne "ID" (chiave primaria), "Titolo", "Contenuto" (non nullo) e "DataDiPubblicazione"

CREATE TABLE Articolo (
    ID INT PRIMARY KEY,
    Titolo VARCHAR(255),
    Contenuto TEXT NOT NULL,
    DataDiPubblicazione DATE
);
