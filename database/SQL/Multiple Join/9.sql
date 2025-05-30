-- Ottieni il nome degli studenti, il nome dei corsi a cui sono iscritti e il nome dei dipartimenti in cui si tengono i corsi.

SELECT s.Nome, c.Nome, d.Nome
FROM Studente AS s
JOIN Iscrizione AS i
    ON s.ID = i.ID_Studente
JOIN Corso AS c
    ON i.ID_Corso = c.ID
JOIN Dipartimento AS d
    ON c.ID_Dipartimento = d.ID;