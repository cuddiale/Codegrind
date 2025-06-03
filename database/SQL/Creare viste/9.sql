-- Crea una vista chiamata "VistaFilmRilascioAnno" che mostri il titolo del film e l'anno di rilascio per tutti i film.

CREATE VIEW VistaFilmRilascioAnno AS
SELECT
    Titolo,
    YEAR(DataRilascio) AS AnnoRilascio
FROM
    Film;