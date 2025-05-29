-- Rimuovi tutti i fornitori con un indirizzo che contiene la parola "obsolete" dalla tabella Fornitore.

DELETE FROM Fornitore
WHERE Indirizzo LIKE '%obsolete%';