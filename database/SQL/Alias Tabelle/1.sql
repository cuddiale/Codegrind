-- Ottieni il nome degli studenti e il nome dei corsi a cui sono iscritti utilizzando gli alias "s" per la tabella "Studente" e "c" per la tabella "Corso".

SELECT s.Nome, c.Nome
FROM Studente AS s
JOIN Iscrizione AS i ON s.ID = i.ID_Studente
JOIN Corso AS c ON i.ID_Corso = c.ID;
