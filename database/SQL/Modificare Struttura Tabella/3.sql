-- Rinomina la colonna "Totale" nella tabella "Ordine" in "ImportoTotale"

ALTER TABLE Ordine
RENAME COLUMN Totale TO ImportoTotale;
