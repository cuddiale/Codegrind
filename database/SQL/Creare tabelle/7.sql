-- Crea una tabella chiamata "Film" con le colonne "ID" (chiave primaria), "Titolo", "AnnoDiUscita" (non nullo) e "Durata"

CREATE TABLE Film (
    ID INT PRIMARY KEY,
    Titolo VARCHAR(255),
    AnnoDiUscita INT NOT NULL,
    Durata INT
);
