-- Crea una vista chiamata "VistaNoleggiRecenti" che mostri il nome del cliente, il titolo del film e la data di noleggio dei noleggi effettuati negli ultimi 30 giorni.

CREATE VIEW VistaNoleggiRecenti AS
SELECT
    c.Nome AS NomeCliente,
    f.Titolo AS TitoloFilm,
    n.DataNoleggio
FROM
    Noleggio n,
    Cliente c,
    Film f
WHERE
    n.IdCliente = c.IdCliente
    AND n.IdFilm = f.IdFilm
    AND n.DataNoleggio >= DATE_SUB(CURRENT_DATE, INTERVAL 30 DAY);