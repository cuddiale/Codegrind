-- Modifica la vista "VistaFilmRilascioAnno" per includere solo i film con un anno di rilascio successivo al 2005.

CREATE OR REPLACE VIEW VistaFilmRilascioAnno AS
SELECT
    IdFilm,
    Titolo,
    AnnoRilascio
FROM
    Film
WHERE
    AnnoRilascio > 2005;