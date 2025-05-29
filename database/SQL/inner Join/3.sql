-- Ottieni il nome dell'impiegato e il nome del dipartimento in cui lavora.

SELECT Impiegato.Nome, Dipartimento.Nome
FROM Impiegato
INNER JOIN Dipartimento ON Impiegato.ID_Dipartimento = Dipartimento.ID;
