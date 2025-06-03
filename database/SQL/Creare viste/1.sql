-- Crea una vista chiamata "VistaCliente" che mostri il nome, il cognome e l'email di tutti i clienti.

CREATE VIEW VistaCliente AS
SELECT
    Nome,
    Cognome,
    Email
FROM
    Cliente;