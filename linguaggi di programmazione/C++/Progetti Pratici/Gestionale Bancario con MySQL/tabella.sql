CREATE DATABASE gestionale_bancario;
USE gestionale_bancario;

CREATE TABLE conti (
    id INT AUTO_INCREMENT PRIMARY KEY,
    nome VARCHAR(50),
    cognome VARCHAR(50),
    saldo DOUBLE
);

CREATE TABLE movimenti (
    id INT AUTO_INCREMENT PRIMARY KEY,
    id_conto INT,
    tipo VARCHAR(50),
    importo DOUBLE,
    data TIMESTAMP DEFAULT CURRENT_TIMESTAMP,
    FOREIGN KEY (id_conto) REFERENCES conti(id)
);