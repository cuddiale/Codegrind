-- Modifica la colonna "Titolo" nella tabella "Libro" per permettere fino a 200 caratteri

ALTER TABLE Libro
ALTER COLUMN Titolo VARCHAR(200);