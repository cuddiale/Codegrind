-- Ottieni tutte le combinazioni possibili tra gli studenti e i corsi.

SELECT Studente.Nome, Corso.Nome
FROM Studente
CROSS JOIN Corso;