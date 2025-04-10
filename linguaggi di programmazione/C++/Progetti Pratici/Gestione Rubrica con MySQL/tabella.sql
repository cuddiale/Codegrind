CREATE DATABASE gestione_rubrica;
USE gestione_rubrica;

CREATE TABLE rubrica (
    id INT AUTO_INCREMENT PRIMARY KEY,
    nome VARCHAR(50),
    cognome VARCHAR(50),
    telefono VARCHAR(15),
    email VARCHAR(50)
);