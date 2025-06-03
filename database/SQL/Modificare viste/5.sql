-- Modifica la vista "VistaFilmCommedia" per includere solo i film di genere "Commedia" rilasciati dopo il 2010.

CREATE OR REPLACE VIEW VistaFilmCommedia AS
SELECT
    IdFilm,
    Titolo,
    Genere
FROM
    Film
WHERE
    Genere = 'Commedia' AND AnnoRilascio > 2010;