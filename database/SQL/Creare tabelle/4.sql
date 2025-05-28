-- Crea una tabella chiamata "Cliente" con le colonne "ID" (chiave primaria), "Nome" e "Email" (unica)

CREATE TABLE Cliente (
    ID INT PRIMARY KEY,
    Nome VARCHAR(100),
    Email VARCHAR(100) UNIQUE
);
