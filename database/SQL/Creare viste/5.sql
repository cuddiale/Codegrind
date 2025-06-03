-- Crea una vista chiamata "VistaFilmCommedia" che mostri il titolo e il genere dei film di genere "Commedia".

CREATE VIEW VistaFilmCommedia AS
SELECT
    Titolo,
    Genere
FROM
    Film
WHERE
    Genere = 'Commedia';
