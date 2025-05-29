-- Modifica la colonna "Contenuto" nella tabella "Articolo" per permettere il salvataggio di testo più lungo

ALTER TABLE Articolo
ALTER COLUMN Contenuto TEXT;
