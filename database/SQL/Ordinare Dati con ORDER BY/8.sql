-- Seleziona il titolo, l'autore e la categoria degli articoli con categoria 'Informatica' ordinati per titolo in ordine alfabetico.

SELECT Titolo, Autore, Categoria
FROM Articolo
WHERE Categoria = 'Informatica'
ORDER BY Titolo;
