-- Crea una vista chiamata "VistaDipendente" che mostri il nome, il cognome, il ruolo e la data di assunzione di tutti i dipendenti.

CREATE VIEW VistaDipendente AS
SELECT
    Nome,
    Cognome,
    Ruolo,
    DataAssunzione
FROM
    Dipendente;
