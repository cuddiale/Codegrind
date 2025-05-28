-- Crea una tabella chiamata "Impiegato" con le colonne "ID" (chiave primaria), "Nome", "Cognome" e "DataDiAssunzione" (non nullo)

CREATE TABLE Impiegato (
    ID INT PRIMARY KEY,
    Nome VARCHAR(100),
    Cognome VARCHAR(100),
    DataDiAssunzione DATE NOT NULL
);
