-- Seleziona il nome, la data di nascita e il numero di telefono degli impiegati nati dopo il 1990.

SELECT Nome, DataNascita, NumeroTelefono
FROM Impiegato
WHERE YEAR(DataNascita) > 1990;