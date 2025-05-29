-- Ottieni il nome dello studente e il nome del corso a cui è iscritto.

SELECT Studente.Nome, Corso.Nome
FROM Studente
INNER JOIN Iscrizione ON Studente.ID = Iscrizione.ID_Studente
INNER JOIN Corso ON Iscrizione.ID_Corso = Corso.ID;