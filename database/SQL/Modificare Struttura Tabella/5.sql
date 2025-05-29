-- Modifica la colonna "Prezzo" nella tabella "Prodotto" per permettere fino a 12 cifre decimali

ALTER TABLE Prodotto
ALTER COLUMN Prezzo DECIMAL(18, 12);
