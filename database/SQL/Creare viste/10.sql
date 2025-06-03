-- Crea una vista chiamata "VistaDipendenteAmministrativo" che mostri il nome, il cognome e la data di assunzione dei dipendenti con il ruolo "Amministrativo".

CREATE VIEW VistaDipendenteAmministrativo AS
SELECT
    Nome,
    Cognome,
    DataAssunzione
FROM
    Dipendente
WHERE
    Ruolo = 'Amministrativo';