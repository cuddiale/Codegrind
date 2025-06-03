-- Crea una vista chiamata "VistaClienteNoleggio" che mostri il nome, il cognome, l'email e il numero di noleggi effettuati da ogni cliente.

CREATE VIEW VistaClienteNoleggio AS
SELECT
    c.Nome,
    c.Cognome,
    c.Email,
    COUNT(n.IdNoleggio) AS NumeroNoleggi
FROM
    Cliente c
LEFT JOIN
    Noleggio n ON c.IdCliente = n.IdCliente
GROUP BY
    c.IdCliente;
