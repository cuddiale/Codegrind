-- Ottieni tutti gli studenti e i loro corsi corrispondenti, inclusi gli studenti senza corsi.

SELECT Studente.Nome, Corso.Nome
FROM Studente
LEFT JOIN Iscrizione ON Studente.ID = Iscrizione.ID_Studente
LEFT JOIN Corso ON Iscrizione.ID_Corso = Corso.ID;