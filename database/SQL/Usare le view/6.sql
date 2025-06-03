-- Ottieni il nome del cliente, il titolo del film e la data di noleggio dei noleggi effettuati negli ultimi 30 giorni utilizzando la vista "VistaNoleggiRecenti".

SELECT
    NomeCliente,
    TitoloFilm,
    DataNoleggio
FROM
    VistaNoleggiRecenti;