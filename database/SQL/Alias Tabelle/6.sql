-- Ottieni il titolo dei film e il nome dei generi utilizzando gli alias "f" per la tabella "Film" e "g" per la tabella "Genere".

SELECT f.titolo AS TitoloFilm, g.nome AS NomeGenere
FROM Film f
JOIN Genere g ON f.id_genere = g.id;