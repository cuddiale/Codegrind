-- Crea una vista chiamata "VistaNoleggio" che mostri il nome del cliente, il titolo del film e la data di noleggio di tutti i noleggi.

CREATE VIEW VistaNoleggio AS
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
    AND n.IdFilm = f.IdFilm;
